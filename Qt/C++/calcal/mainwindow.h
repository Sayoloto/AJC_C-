#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>


namespace ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void numberDisplay(int digit);

private slots:
    void digitSelect();
    void operationSelect();
    void totalCalc();
    void setGrid();

private:
    QLabel *label;
    QLineEdit *line;
    QPushButton *operationButton[6];
    QPushButton *numberButton[10];
};


#endif // MAINWINDOW_H
