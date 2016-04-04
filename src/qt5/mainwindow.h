#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>

class AURMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AURMainWindow(QWidget *parent = Q_NULLPTR, Qt::WindowFlags flags = 0);
    ~AURMainWindow();

private:
    QTextEdit *center;

};


#endif /* MAINWINDOW_H */