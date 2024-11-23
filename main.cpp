#include "mainwindow.h"

#include <QApplication>

#include <QMainWindow>
#include <QFile>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QFile styleFile(":/MaterialDark.qss");
    if (styleFile.open(QFile::ReadOnly)) {
        QString styleSheet = QLatin1String(styleFile.readAll());
        a.setStyleSheet(styleSheet);
        styleFile.close();
    } else {
        qDebug() << "Fail style" << styleFile.errorString();
    }

    return a.exec();
}
