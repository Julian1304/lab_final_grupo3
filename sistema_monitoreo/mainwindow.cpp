#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QDebug>
#include <iostream>
#include <QTextStream>
#include <QString>
#include <ostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    //tabla referencia
    ui->val_ref->setColumnCount(4);
    ui->val_ref->setHorizontalHeaderLabels({"Velocidad","Frecuencia","Voltaje","Temperatura"});

    ui->val_ref->setRowCount(4);
    ui->val_ref->setVerticalHeaderLabels({"Tolerancia(%)","Referencia","MAX","MIN"});



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_motor_act_clicked() //boton valores referencia
{
   QString datos_ref[16]={"5%","5%","10%","5%","1800rpm","60Hz","220V","60°C","1890","63","242","63","1710","57","198","57"};
    int i=0;

    for (int fil = 0; fil < 4; ++fil) {
        for (int col = 0; col < 4; ++col) {
            ui->val_ref->setItem(fil,col,new QTableWidgetItem(datos_ref[i]));
                    i++;
        }
    }
}


void MainWindow::on_sta_motor_clicked() // boton estado motor
{
 //QFile f("/home/alse/prueba_lab_5/datos.txt"); //ruta donde se guarda el archivo .txt
 //QFile f("/home/alse/prueba_lab_5/datos_2.txt"); //otro ejemplo
 QFile f("/home/alse/prueba_lab_5/datos_3.txt"); //otro ejemplo
 if (!f.open(QIODevice::ReadOnly | QIODevice::Text)) // validación
 {
     cout << "open Failed." << endl;
     return;
 }
 QTextStream txtInput(&f);
 QString LineStr_a;
 QString LineStr_b; //temporal
 QStringList datos_a;
 QStringList datos_b;
 QString item,item_2;
 QString val_motor[5];//guardar valores
 int vel,fre,vol,tem;

 if(!txtInput.atEnd())
 {
     LineStr_a = txtInput.readLine();
     datos_a=LineStr_a.split(";"); //separar
     qDebug() << datos_a << endl; //"comprobación"
     for (int cont = 0; cont < 5; ++cont)
     {
         LineStr_b=datos_a[cont];
         datos_b=LineStr_b.split(":"); //separar

         val_motor[cont]=datos_b[1];

          qDebug() << datos_b << endl; //comprobación


     }

     //llenar la tabla
     ui->velocidad->setText(val_motor[0]);
     ui->frecuencia->setText(val_motor[1]);
     ui->voltaje->setText(val_motor[2]);
     ui->temperatura->setText(val_motor[3]);
     ui->time->setText(val_motor[4]);
  }
 vel=val_motor[0].toInt();// convierte el valor de la velocidad a un entero
 fre=val_motor[1].toInt();// convierte el valor de la frecuencia a un entero
 vol=val_motor[2].toInt();// convierte el valor de la voltaje a un entero
 tem=val_motor[3].toInt();// convierte el valor de la temperatura a un entero

 if (1710<vel && vel<1890) // si se encuentra entre los valores de tolerancia
 {
     QPalette status = ui->velocidad->palette();
     status.setColor(QPalette::Base,Qt::green); // cambiar el fondo del text Browser
     ui->velocidad->setPalette(status);
 }
 else
 {
     QPalette status = ui->velocidad->palette();
     status.setColor(QPalette::Base,Qt::red);
     ui->velocidad->setPalette(status);
 }

 if (57<fre && fre<63)
 {
     QPalette status = ui->frecuencia->palette();
     status.setColor(QPalette::Base,Qt::green);
     ui->frecuencia->setPalette(status);
 }
 else
 {
     QPalette status = ui->frecuencia->palette();
     status.setColor(QPalette::Base,Qt::red);
     ui->frecuencia->setPalette(status);
 }

 if (198<vol && vol<242)
 {
     QPalette status = ui->voltaje->palette();
     status.setColor(QPalette::Base,Qt::green);
     ui->voltaje->setPalette(status);
 }
 else
 {
     QPalette status = ui->voltaje->palette();
     status.setColor(QPalette::Base,Qt::red);
     ui->voltaje->setPalette(status);
 }

 if (57<tem && tem<67)
 {
     QPalette status = ui->temperatura->palette();
     status.setColor(QPalette::Base,Qt::green);
     ui->temperatura->setPalette(status);
 }
 else
 {
     QPalette status = ui->temperatura->palette();
     status.setColor(QPalette::Base,Qt::red);
     ui->temperatura->setPalette(status);
 }

    QPalette status = ui->time->palette();
    status.setColor(QPalette::Base,Qt::blue);
    ui->time->setPalette(status);



 f.close();

}

void MainWindow::on_frecuencia_textChanged()
{

}

void MainWindow::on_voltaje_textChanged()
{

}

void MainWindow::on_temperatura_textChanged()
{

}

void MainWindow::on_time_textChanged()
{

}


void MainWindow::on_velocidad_textChanged()
{

}
