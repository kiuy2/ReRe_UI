#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for (int i=0; i<2; i++) {
        QWidget* srt = ui->srtArea->findChild<QWidget*>("srt"+QString::number(i)+"open");

        connect(srt, SIGNAL(clicked()), this, SLOT(on_srtopen_clicked()));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_srtopen_clicked()
{
    QObject* sel = QObject::sender();

    QMessageBox::about(this, "debug", sel->objectName());
}

void MainWindow::on_srtadd_clicked()
{
    bool ok;

    QString text = QInputDialog::getText(this, Kor("새 문서"), Kor("이름을 입력하세요:"), QLineEdit::Normal, "", &ok);

    if (ok && !text.isEmpty())
        QMessageBox::about(this, "debug", text);
}
