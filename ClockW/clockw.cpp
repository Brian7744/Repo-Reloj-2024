#include "clockw.h"
#include "ui_clockw.h"

ClockW::ClockW(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ClockW)
{
    ui->setupUi(this);
    status = 0;
    status1 = 0;
    status2 = 0;
    status3 = 0;
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
        ui->per_1->setStyleSheet("background-color: rgb(85, 85, 255);border-radius: 20px;");

    }else{
        ui->pushButton->setText("cero");
        ui->per_1->setStyleSheet("background-color: rgb(77, 230, 3);border-radius: 20px;");
        status=0;
    }
}
//qApp->setStyleSheet("QLineEdit { background-color: yellow; }");


void ClockW::on_pushButton_2_clicked()
{
    /*Boton 2 para controlar la segunda perla sentido horario*/
    if(status1==0){
        ui->pushButton_2->setText("one");
        status1=1;
        ui->per_4->setStyleSheet("background-color: rgb(85, 85, 255);border-radius: 20px;");
    }else{
        ui->pushButton_2->setText("cero");
        ui->per_4->setStyleSheet("background-color: rgb(77, 230, 3);border-radius: 20px;");
        status1=0;
    }

}


void ClockW::on_pushButton_3_clicked()
{
    /*Boton 3 para controlar la tercera perla sentido horario*/

    if(status2==0){

        ui->pushButton_3->setText("one");
        status2=1;
        ui->per_3->setStyleSheet("background-color: rgb(85, 85, 255);border-radius: 20px;");
    }else{
        ui->pushButton_3->setText("cero");
        ui->per_3->setStyleSheet("background-color: rgb(77, 230, 3);border-radius: 20px;");
        status2=0;
    }
}


void ClockW::on_pushButton_4_clicked()
{
    /*Boton 4 para controlar la cuarta perla sentido horario*/

    if(status3==0){
        status3=1;
        ui->pushButton_4->setText("one");
        ui->per_5->setStyleSheet("background-color: rgb(85, 85, 255);border-radius: 20px;");
    }else{
        status3=0;
        ui->pushButton_4->setText("cero");
        ui->per_5->setStyleSheet("background-color: rgb(77, 230, 3);border-radius: 20px;");
    }
}
/*
Me falta elegir el color de las pernas a la noche AM tengo pensado un fucsia
como el de piedra de ben10.
Tengo que poner una linea en el centro para poner la hora exacta
Tengo que escribir el codigo para pedirle la hora
*/
