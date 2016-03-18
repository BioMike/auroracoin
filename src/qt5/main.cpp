#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
   QApplication app(argc, argv);
   
   AURMainWindow mainWindow();
   
   /* Start the application */
   return app.exec();
}