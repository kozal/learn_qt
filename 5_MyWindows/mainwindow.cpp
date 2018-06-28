#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->plainTextEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_Window_triggered()
{
//    MyDialog mDialog;

    /* if we show it modal, we cannot turn back
     * to main window when the dialog is open */
//    mDialog.setModal(true);
//    mDialog.exec();

    /* if we use show, the dialog disappears immediately after showing
    * since function ends and returns*/
  //  mDialog.show();

    /* instead, use pointer, create dialog and set parent as "this"*/
    mDialog = new MyDialog(this);
    mDialog->show();

}
