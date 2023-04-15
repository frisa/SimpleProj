#include <QtCore>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << "This is the running console application with Qt support" << std::endl;
    return a.exec();
}