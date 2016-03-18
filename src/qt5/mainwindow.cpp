#include "mainwindow.h"
#include <QStatusBar>


AURMainWindow::AURMainWindow(QWidget *parent, Qt::WindowFlags flags) : QMainWindow(parent, flags)
{
    setObjectName("AURMainWindow");
    setWindowTitle(tr("Auroracoin"));

    statusBar()->showMessage(tr("Status Bar"));
}

AURMainWindow::~AURMainWindow()
{
}