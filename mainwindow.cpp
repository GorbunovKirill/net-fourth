#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int currentValue = ui->progressBar->value();
    currentValue += 1;

    if (currentValue > 10) {
        currentValue = 0;
    }

    ui->progressBar->setValue(currentValue);

    if (ui->pushButton->isChecked()) {
        ui->pushButton->setText("Stop");
    } else {
        ui->pushButton->setText("Start");
    }
}

