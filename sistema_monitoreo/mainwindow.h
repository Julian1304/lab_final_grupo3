#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_sta_motor_clicked();

    void on_frecuencia_textChanged();

    void on_voltaje_textChanged();

    void on_temperatura_textChanged();

    void on_time_textChanged();

    void on_velocidad_textChanged();

    void on_motor_act_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
