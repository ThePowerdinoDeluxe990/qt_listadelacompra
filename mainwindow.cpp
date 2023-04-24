
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QWidget>


using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),

    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(380,341);
    ui->tableWidget->setColumnCount(1);
    ui->tableWidget->setHorizontalHeaderLabels({"Lista"});
}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_pushButton_clicked()
{
    const int row =ui->tableWidget->rowCount();

    QString lista= ui->nombre->text();
    ui->tableWidget->insertRow(row);
    ui->tableWidget->setItem(row,0, new QTableWidgetItem(lista));
    QTableWidget tablewidget;

}

