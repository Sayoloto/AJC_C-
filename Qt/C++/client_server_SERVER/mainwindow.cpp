
#include "mainwindow.h"
#include "ui_mainwindow.h"


// Here is the SERVER end for the TCP connection.
#include <QDebug> // to print out out info and connection status
#include <QHostAddress>  // Qt class for connecting host address
#include <QAbstractSocket>  // class for client connection port
#include <QTextEdit>
#include <QString>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    _server(this) // pointer towards current class as server
{
    ui->setupUi(this);
    _server.listen(QHostAddress::Any, 2356);  //choosing the socket address to listen to
    connect(&_server, SIGNAL(newConnection()), this, SLOT(onNewConnection()));

    //signal is emmited when server discovers a new connection.
    //what to do on a new connection is define in the slot onNewConnection
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onNewConnection()
{
   QTcpSocket *clientSocket = _server.nextPendingConnection(); //create a variable for the client
   connect(clientSocket, SIGNAL(readyRead()), this, SLOT(onReadyRead())); // connect to the client socket and ready to read the sender messg
   connect(clientSocket, SIGNAL(stateChanged(QAbstractSocket::SocketState)), this, SLOT(onSocketStateChanged(QAbstractSocket::SocketState)));
   connect(clientSocket, SIGNAL(readyRead()), this, SLOT(onReadyRead())); // connect to the client socket and ready to read the sender messg


    _sockets.push_back(clientSocket);
    for (QTcpSocket* socket : _sockets) {
        socket->write(QByteArray::fromStdString(clientSocket->peerAddress().toString().toStdString() + " connected to server !\n"));
    }
}

void MainWindow::onSocketStateChanged(QAbstractSocket::SocketState socketState)
{
    if (socketState == QAbstractSocket::UnconnectedState)
    {
        QTcpSocket* sender = static_cast<QTcpSocket*>(QObject::sender());
        _sockets.removeOne(sender);

    }
}



// The onReadyRead slot function is used to read sender information or whatsover required from the client side
// sender Qtcpsocket class is created and create a Qtcp object
// A QbyteArray class reads sender data

void MainWindow::onReadyRead()
{
    QTcpSocket* sender = static_cast<QTcpSocket*>(QObject::sender());
    QByteArray datas = sender->readAll();
    for (QTcpSocket* socket : _sockets)
    {
           //if (socket != sender)
            socket->write(QByteArray::fromStdString(sender->peerAddress().toString().toStdString() + ": " + datas.toStdString()));
            QString datas_as_string = QString(datas);
            QString peer_address = "connected to" + sender->peerAddress().toString();
            ui->label->setText(peer_address);
            ui->textEdit->setText(datas_as_string);
    }
}
