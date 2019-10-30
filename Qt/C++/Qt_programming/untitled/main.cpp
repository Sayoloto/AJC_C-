#include <QCoreApplication>
#include "QDir"
#include <iostream>
#include "QString"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


     QDir dir = QDir::homePath(); //set sezrch to root path
     QFileInfoList list = dir.entryInfoList(); // put the directory content into a fileinfo list

     // loop through the contents
     for (int i = 0; i < list.size(); ++i) {
         QRegExp expression("(\\.\\w{3}$)");

         QFileInfo fileInfo = list.at(i);

         QString checker =fileInfo.filePath();
         if (checker.contains(expression))
         {
         std::cout << qPrintable(QString("%1 %2").arg(fileInfo.size(), 10)
                                                 .arg(fileInfo.filePath()));
         std::cout << std::endl;
         }
     }









    return a.exec();
}
