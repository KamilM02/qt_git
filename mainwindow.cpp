#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptrMakeARecipe = new MakeARecipe();
    ptrSearchRecipe = new SearchRecipe();
}

MainWindow::~MainWindow()
{
    delete ptrMakeARecipe;
    delete ptrSearchRecipe;
    delete ui;

}


void MainWindow::on_pushButton_2_clicked()
{
    ptrMakeARecipe->show();
}

