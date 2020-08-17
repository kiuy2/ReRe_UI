#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QScrollArea>
#include <QPushButton>
#include <QObject>
#include <QInputDialog>
#include <QMessageBox>
#include <QSize>
#include <QLayout>

#define Kor(str) QString::fromLocal8Bit(str)

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
