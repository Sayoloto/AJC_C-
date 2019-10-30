#include <QCoreApplication>
#include <QDebug>
#include <QElapsedTimer>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QElapsedTimer t;
    t.start();
    for(int f=1; f<100; f++)
    {   int fois=1;
        fois = f*f;

        qDebug()<<fois;

    }
    qDebug()<<"here is the time it took to run the programe"<< t.nsecsElapsed()<< "milliseconds";


    return a.exec();

}
