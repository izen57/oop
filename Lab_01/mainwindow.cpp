#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMainWindow>
#include <QFileDialog>
#include "task_manager.h"
#include "cdio.h"
#include "operations.h"
#include "object.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    request task;
    task.act = Init;
    task_manager(task);
}

MainWindow::~MainWindow()
{
    request task;
    task.act = Quit;
    task_manager(task);
    delete ui;
}

void MainWindow::update_obj_center_info()
{
    if (ui->graphicsView->scene())
    {
        ui->lineEdit_center_x->setText(QString::number(ui->graphicsView->scene()->itemsBoundingRect().center().x()));
        ui->lineEdit_center_y->setText(QString::number(-ui->graphicsView->scene()->itemsBoundingRect().center().y()));
    }
    ui->lineEdit_center_x->repaint();
}

void MainWindow::on_pushButton_choose_clicked()
{
    QString str = QFileDialog::getOpenFileName(0, "Выберите 3D-объект", "D:/oop/Lab_01", "*.txt");
    ui->lineEdit_file->setText(str);
}

void MainWindow::on_lineEdit_file_textChanged(const QString &arg1)
{
    if (arg1.length())
        ui->pushButton_load->setEnabled(1);
    else
        ui->pushButton_load->setEnabled(0);
}

void MainWindow::drawing()
{
    request task;
    task.act = Draw;
    task.dr.QGV = ui->graphicsView;
    task.dr.h = ui->graphicsView->height();
    task.dr.w = ui->graphicsView->width();
    show_message(task_manager(task));
    ui->graphicsView->repaint();
}

void MainWindow::on_pushButton_load_clicked()
{
    request task;
    task.act = Load;
    task.lf.file_name = ui->lineEdit_file->text().toLocal8Bit().data();
    int error = task_manager(task);
    show_message(error);
    drawing();
    update_obj_center_info();
}

void MainWindow::on_pushButton_unload_clicked()
{
    ui->graphicsView->scene()->clear();
    ui->graphicsView->repaint();
    update_obj_center_info();
}

void MainWindow::on_button_move_clicked()
{
    request task;
    task.act = Move;
    bool dx_ok = 1, dy_ok = 1, dz_ok = 1;
    task.mo.dx = ui->lineEdit_dx->text().toFloat(&dx_ok);
    task.mo.dy = ui->lineEdit_dy->text().toFloat(&dy_ok);
    task.mo.dz = ui->lineEdit_dz->text().toFloat(&dz_ok);
    if (!dx_ok || !dy_ok || !dz_ok)
    {
        show_message(INPUT_ERR);
        return;
    }
    show_message(task_manager(task));
    drawing();
    update_obj_center_info();
}

void MainWindow::on_button_scale_clicked()
{
    request task;
    task.act = Scale;
    bool kx_ok = 1, ky_ok = 1, kz_ok = 1, xm_ok = 1, ym_ok = 1, zm_ok = 1;
    task.sc.kx = ui->lineEdit_KX->text().toFloat(&kx_ok);
    task.sc.ky = ui->lineEdit_KY->text().toFloat(&ky_ok);
    task.sc.kz = ui->lineEdit_KZ->text().toFloat(&kz_ok);
    if (ui->checkBox_UseCenterScale->isChecked())
    {
        task.sc.center.x = ui->graphicsView->scene()->itemsBoundingRect().center().x();
        task.sc.center.y = ui->graphicsView->scene()->itemsBoundingRect().center().y();
        task.sc.center.z = 0;
    }
    else
    {
        task.sc.center.x = ui->lineEdit_XM->text().toFloat(&xm_ok);
        task.sc.center.y = ui->lineEdit_YM->text().toFloat(&ym_ok);
        task.sc.center.z = ui->lineEdit_ZM->text().toFloat(&zm_ok);
    }
    if (!kx_ok || !ky_ok || !kz_ok || !xm_ok || !ym_ok || ! zm_ok)
    {
        show_message(INPUT_ERR);
        return;
    }
    show_message(task_manager(task));
    drawing();
    update_obj_center_info();
}

void MainWindow::on_button_rotate_clicked()
{
    request task;
    task.act = Rotate;
    bool dgx_ok = 1, dgy_ok = 1, dgz_ok = 1, xc_ok = 1, yc_ok = 1, zc_ok = 1;
    task.ro.dgx = ui->lineEdit_dgX->text().toInt(&dgx_ok);
    task.ro.dgy = ui->lineEdit_dgY->text().toInt(&dgy_ok);
    task.ro.dgz = ui->lineEdit_dgZ->text().toInt(&dgz_ok);
    if (ui->checkBox_UseCenterRotation->isChecked())
    {
        task.ro.center.x = ui->graphicsView->scene()->itemsBoundingRect().center().x();
        task.ro.center.y = ui->graphicsView->scene()->itemsBoundingRect().center().y();
        task.ro.center.z = 0;
    }
    else
    {
        task.ro.center.x = ui->lineEdit_XC->text().toFloat(&xc_ok);
        task.ro.center.y = ui->lineEdit_YC->text().toFloat(&yc_ok);
        task.ro.center.z = ui->lineEdit_ZC->text().toFloat(&zc_ok);
    }
    if (!dgx_ok || !dgy_ok || !dgz_ok || !xc_ok || !yc_ok || !zc_ok)
    {
        show_message(INPUT_ERR);
        return;
    }
    show_message(task_manager(task));
    drawing();
    update_obj_center_info();
}
void MainWindow::show_message(const int &err)
{
    QMessageBox msgBox;
    msgBox.setIcon(QMessageBox::Critical);
    switch(err)
    {
        case OK:
            break;
        case OPEN_FILE_ERR:
            msgBox.setText("Не удалось открыть файл, либо он не найден.");
            msgBox.exec();
            break;
        case FILE_INCORRECT:
            msgBox.setText("Файл заполнен неверно.");
            msgBox.exec();
            break;
        case ALLOCATION_ERR:
            msgBox.setText("Возникла ошибка при выделении памяти.");
            msgBox.exec();
            break;
        case POINTS_INCORR:
            msgBox.setText("Кол-во точек должно быть натуральным числом.");
            msgBox.exec();
            break;
        case LINKS_INCORR:
            msgBox.setText("Кол-во граней должно быть натуральным числом, либо нулём.");
            msgBox.exec();
            break;
        case INPUT_ERR:
            msgBox.setText("Введённые переменные должны быть целого или вещественного типа.");
            msgBox.exec();
            break;
        case ARR_UNINITIALIZED:
            msgBox.setText("Массивы вершин и граней не были инициализированы.");
            msgBox.exec();
            break;
        case LINKS_CONTAIN_INCORR_POINTS:
            msgBox.setText("Файл заполнен неверно. Грани связывают отсутствующие вершины.");
            msgBox.exec();
            break;
        default:
            msgBox.setText("Неизвестная ошибка.");
            msgBox.exec();
            break;
    }
}
