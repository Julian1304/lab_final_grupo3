/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *item_1_2;
    QPushButton *motor_act;
    QPushButton *sta_motor;
    QTableWidget *val_ref;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QTextBrowser *velocidad;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QTextBrowser *frecuencia;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_3;
    QTextBrowser *voltaje;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_4;
    QTextBrowser *temperatura;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_6;
    QTextBrowser *time;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(220, 30, 201, 91));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        item_1_2 = new QLabel(verticalLayoutWidget);
        item_1_2->setObjectName(QString::fromUtf8("item_1_2"));

        verticalLayout->addWidget(item_1_2);

        motor_act = new QPushButton(verticalLayoutWidget);
        motor_act->setObjectName(QString::fromUtf8("motor_act"));

        verticalLayout->addWidget(motor_act);

        sta_motor = new QPushButton(verticalLayoutWidget);
        sta_motor->setObjectName(QString::fromUtf8("sta_motor"));
        sta_motor->setAutoRepeat(false);

        verticalLayout->addWidget(sta_motor);

        val_ref = new QTableWidget(centralwidget);
        val_ref->setObjectName(QString::fromUtf8("val_ref"));
        val_ref->setGeometry(QRect(80, 130, 501, 141));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(100, 290, 469, 118));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5, 0, Qt::AlignHCenter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_4->addWidget(label, 0, Qt::AlignHCenter);

        velocidad = new QTextBrowser(verticalLayoutWidget_2);
        velocidad->setObjectName(QString::fromUtf8("velocidad"));

        verticalLayout_4->addWidget(velocidad, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_5->addWidget(label_2, 0, Qt::AlignHCenter);

        frecuencia = new QTextBrowser(verticalLayoutWidget_2);
        frecuencia->setObjectName(QString::fromUtf8("frecuencia"));

        verticalLayout_5->addWidget(frecuencia);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_6->addWidget(label_3, 0, Qt::AlignHCenter);

        voltaje = new QTextBrowser(verticalLayoutWidget_2);
        voltaje->setObjectName(QString::fromUtf8("voltaje"));

        verticalLayout_6->addWidget(voltaje);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_7->addWidget(label_4, 0, Qt::AlignHCenter);

        temperatura = new QTextBrowser(verticalLayoutWidget_2);
        temperatura->setObjectName(QString::fromUtf8("temperatura"));

        verticalLayout_7->addWidget(temperatura);


        horizontalLayout->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_8->addWidget(label_6, 0, Qt::AlignHCenter);

        time = new QTextBrowser(verticalLayoutWidget_2);
        time->setObjectName(QString::fromUtf8("time"));

        verticalLayout_8->addWidget(time);


        horizontalLayout->addLayout(verticalLayout_8);


        verticalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        item_1_2->setText(QCoreApplication::translate("MainWindow", "solicitud de actualizaci\303\263n", nullptr));
        motor_act->setText(QCoreApplication::translate("MainWindow", "Valores Referencia", nullptr));
        sta_motor->setText(QCoreApplication::translate("MainWindow", "Estado de Motor", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "ESTADO DEL MOTOR ", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "VELOCIDAD", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "FRECUENCIA", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "VOLTAJE", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "TEMPERATURA", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "TIEMPO DE OPERACI\303\223N", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
