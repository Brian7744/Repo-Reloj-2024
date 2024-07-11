#include "clockw.h"
#include "ui_clockw.h"

ClockW::ClockW(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ClockW)
{
    ui->setupUi(this);
    status=0;
}

ClockW::~ClockW()
{
    delete ui;
}


void ClockW::on_pushButton_clicked()
{
    if(status==0){
        ui->pushButton->setText("one");
        status=1;
        ui->per_1->setStyleSheet("background-color: rgb(136, 136, 102);border-radius: 20px;");

    }else{
        ui->pushButton->setText("cero");
        ui->per_1->setStyleSheet("background-color: rgb(77, 230, 3);border-radius: 20px;");
        status=0;
    }
}
//qApp->setStyleSheet("QLineEdit { background-color: yellow; }");

