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
    meridiano = 0;
}

ClockW::~ClockW()
{
    delete ui;
}


void ClockW::on_pushButton_clicked()
{
    /*Boton 1 para controlar la primer perla sentido horario*/

    if((status==1)&&(meridiano==1)){
        ui->pushButton->setText("OFF");
        ui->per_1->setStyleSheet("background-color: rgb(77, 230, 3);border-radius: 20px;");
        status=0;
    }else{
        if((status==1)&&(meridiano==0)){
            ui->pushButton->setText("OFF");
            status=0;
            ui->per_1->setStyleSheet("background-color: rgb(250, 0, 250);border-radius: 20px;");
        }else{
            ui->pushButton->setText("ON");
            status=1;
            ui->per_1->setStyleSheet("background-color: rgb(99, 99, 167);border-radius: 20px;");
        }
    }
}
//qApp->setStyleSheet("QLineEdit { background-color: yellow; }");


void ClockW::on_pushButton_2_clicked()
{
    /*Boton 2 para controlar la segunda perla sentido horario*/

    if((status1==1)&&(meridiano==1)){
        ui->pushButton_2->setText("OFF");
        ui->per_4->setStyleSheet("background-color: rgb(77, 230, 3);border-radius: 20px;");
        status1=0;
    }else{
        if((status1==1)&&(meridiano==0)){
            ui->pushButton_2->setText("OFF");
            status1=0;
            ui->per_4->setStyleSheet("background-color: rgb(250, 0, 250);border-radius: 20px;");
        }else{
            ui->pushButton_2->setText("ON");
            status1=1;
            ui->per_4->setStyleSheet("background-color: rgb(99, 99, 167);border-radius: 20px;");
        }
    }
}


void ClockW::on_pushButton_3_clicked()
{
    /*Boton 3 para controlar la tercera perla sentido horario*/

    if((status2==1)&&(meridiano==1)){
        ui->pushButton_3->setText("OFF");
        ui->per_3->setStyleSheet("background-color: rgb(77, 230, 3);border-radius: 20px;");
        status2=0;
    }else{
        if((status2==1)&&(meridiano==0)){
            ui->pushButton_3->setText("OFF");
            status2=0;
            ui->per_3->setStyleSheet("background-color: rgb(250, 0, 250);border-radius: 20px;");
        }else{
            ui->pushButton_3->setText("ON");
            status2=1;
            ui->per_3->setStyleSheet("background-color: rgb(99, 99, 167);border-radius: 20px;");
        }
    }
}


void ClockW::on_pushButton_4_clicked()
{
    /*Boton 4 para controlar la cuarta perla sentido horario*/

    if((status3==1)&&(meridiano==1)){
        ui->pushButton_4->setText("OFF");
        ui->per_5->setStyleSheet("background-color: rgb(77, 230, 3);border-radius: 20px;");
        status3=0;
    }else{
        if((status3==1)&&(meridiano==0)){
            ui->pushButton_4->setText("OFF");
            status3=0;
            ui->per_5->setStyleSheet("background-color: rgb(250, 0, 250);border-radius: 20px;");
        }else{
            ui->pushButton_4->setText("ON");
            status3=1;
            ui->per_5->setStyleSheet("background-color: rgb(99, 99, 167);border-radius: 20px;");
        }
    }
}


void ClockW::on_pushButton_5_clicked()
{
    /*Boton para controlar el color de las perlas*/

    if(meridiano==0){
        meridiano = 1;
        ui->pushButton_5->setText("PM");
    }else{
        meridiano = 0;
        ui->pushButton_5->setText("AM");
    }
}

/*
Me falta elegir el color de las pernas a la noche AM tengo pensado un fucsia
como el de piedra de ben10.
Tengo que poner una linea en el centro para poner la hora exacta
Tengo que escribir el codigo para pedirle la hora
*/

void ClockW::on_pushButton_6_clicked()
{
    QDateTime dt;

    ui->lineEdit->setText(dt.currentDateTime().toString("       hh:mm:ss"));
}

