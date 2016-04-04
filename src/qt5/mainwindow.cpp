#include "mainwindow.h"
#include <QStatusBar>
#include <QTextEdit>


AURMainWindow::AURMainWindow(QWidget *parent, Qt::WindowFlags flags) : QMainWindow(parent, flags)
{
    setObjectName("AURMainWindow");
    setWindowTitle(tr("Auroracoin"));

    QTextEdit *center = new QTextEdit(this);
    center->setReadOnly(true);
    center->setMinimumSize(400, 205);
    setCentralWidget(center);

    statusBar()->showMessage(tr("Status Bar"));
}

AURMainWindow::~AURMainWindow()
{
}