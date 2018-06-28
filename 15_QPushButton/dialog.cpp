#include "dialog.h"
#include "ui_dialog.h"
#include <QtWidgets>
// #include <QtCore>
// #include <QtGui>

Dialog::Dialog(QWidget *parent) : QDialog(parent),
                                  ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QMessageBox::information(this,"Title", "Hello world");
}
