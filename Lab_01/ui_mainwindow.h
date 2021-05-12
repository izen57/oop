/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_move;
    QLineEdit *lineEdit_dx;
    QLineEdit *lineEdit_dy;
    QLineEdit *lineEdit_dz;
    QLabel *label_dx;
    QLabel *label_dy;
    QLabel *label_dz;
    QPushButton *button_move;
    QGroupBox *groupBox_scale;
    QGroupBox *groupBox_coords;
    QLineEdit *lineEdit_KZ;
    QLabel *label_KY;
    QLabel *label_KX;
    QLineEdit *lineEdit_KY;
    QLabel *label_KZ;
    QLineEdit *lineEdit_KX;
    QGroupBox *groupBox_ScaleCenter;
    QLabel *label_XM;
    QLineEdit *lineEdit_ZM;
    QLineEdit *lineEdit_XM;
    QLabel *label_YM;
    QLineEdit *lineEdit_YM;
    QLabel *label_ZM;
    QCheckBox *checkBox_UseCenterScale;
    QPushButton *button_scale;
    QGroupBox *groupBox_rotation;
    QGroupBox *groupBox_degree;
    QLabel *label_dgZ;
    QLineEdit *lineEdit_dgX;
    QLineEdit *lineEdit_dgY;
    QLabel *label_dgX;
    QLabel *label_dgY;
    QLineEdit *lineEdit_dgZ;
    QGroupBox *groupBox_RotCenter;
    QLabel *label_XC;
    QLineEdit *lineEdit_ZC;
    QLineEdit *lineEdit_XC;
    QLabel *label_YC;
    QLineEdit *lineEdit_YC;
    QLabel *label_ZC;
    QCheckBox *checkBox_UseCenterRotation;
    QPushButton *button_rotate;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_ObjManage;
    QLineEdit *lineEdit_file;
    QPushButton *pushButton_load;
    QPushButton *pushButton_unload;
    QPushButton *pushButton_choose;
    QGroupBox *groupBox_object_center;
    QLineEdit *lineEdit_center_x;
    QLineEdit *lineEdit_center_y;
    QLabel *label_center_x;
    QLabel *label_center_y;
    QSpacerItem *horizontalSpacer;
    QLabel *label_graphics;
    QGraphicsView *graphicsView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(909, 730);
        MainWindow->setMinimumSize(QSize(820, 730));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_move = new QGroupBox(centralwidget);
        groupBox_move->setObjectName(QString::fromUtf8("groupBox_move"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_move->sizePolicy().hasHeightForWidth());
        groupBox_move->setSizePolicy(sizePolicy);
        groupBox_move->setMinimumSize(QSize(0, 120));
        groupBox_move->setMaximumSize(QSize(16777215, 120));
        QFont font;
        font.setPointSize(14);
        groupBox_move->setFont(font);
        lineEdit_dx = new QLineEdit(groupBox_move);
        lineEdit_dx->setObjectName(QString::fromUtf8("lineEdit_dx"));
        lineEdit_dx->setGeometry(QRect(10, 50, 41, 24));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_dx->sizePolicy().hasHeightForWidth());
        lineEdit_dx->setSizePolicy(sizePolicy1);
        lineEdit_dx->setInputMask(QString::fromUtf8(""));
        lineEdit_dx->setMaxLength(32767);
        lineEdit_dx->setClearButtonEnabled(false);
        lineEdit_dy = new QLineEdit(groupBox_move);
        lineEdit_dy->setObjectName(QString::fromUtf8("lineEdit_dy"));
        lineEdit_dy->setGeometry(QRect(70, 50, 41, 24));
        sizePolicy1.setHeightForWidth(lineEdit_dy->sizePolicy().hasHeightForWidth());
        lineEdit_dy->setSizePolicy(sizePolicy1);
        lineEdit_dz = new QLineEdit(groupBox_move);
        lineEdit_dz->setObjectName(QString::fromUtf8("lineEdit_dz"));
        lineEdit_dz->setGeometry(QRect(130, 50, 41, 24));
        sizePolicy1.setHeightForWidth(lineEdit_dz->sizePolicy().hasHeightForWidth());
        lineEdit_dz->setSizePolicy(sizePolicy1);
        label_dx = new QLabel(groupBox_move);
        label_dx->setObjectName(QString::fromUtf8("label_dx"));
        label_dx->setGeometry(QRect(20, 25, 31, 21));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_dx->sizePolicy().hasHeightForWidth());
        label_dx->setSizePolicy(sizePolicy2);
        label_dy = new QLabel(groupBox_move);
        label_dy->setObjectName(QString::fromUtf8("label_dy"));
        label_dy->setGeometry(QRect(80, 20, 31, 31));
        sizePolicy2.setHeightForWidth(label_dy->sizePolicy().hasHeightForWidth());
        label_dy->setSizePolicy(sizePolicy2);
        label_dz = new QLabel(groupBox_move);
        label_dz->setObjectName(QString::fromUtf8("label_dz"));
        label_dz->setGeometry(QRect(140, 25, 31, 21));
        sizePolicy2.setHeightForWidth(label_dz->sizePolicy().hasHeightForWidth());
        label_dz->setSizePolicy(sizePolicy2);
        button_move = new QPushButton(groupBox_move);
        button_move->setObjectName(QString::fromUtf8("button_move"));
        button_move->setEnabled(false);
        button_move->setGeometry(QRect(10, 80, 161, 24));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(button_move->sizePolicy().hasHeightForWidth());
        button_move->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(groupBox_move);

        groupBox_scale = new QGroupBox(centralwidget);
        groupBox_scale->setObjectName(QString::fromUtf8("groupBox_scale"));
        sizePolicy.setHeightForWidth(groupBox_scale->sizePolicy().hasHeightForWidth());
        groupBox_scale->setSizePolicy(sizePolicy);
        groupBox_scale->setMinimumSize(QSize(0, 280));
        groupBox_scale->setMaximumSize(QSize(16777215, 280));
        groupBox_scale->setFont(font);
        groupBox_coords = new QGroupBox(groupBox_scale);
        groupBox_coords->setObjectName(QString::fromUtf8("groupBox_coords"));
        groupBox_coords->setGeometry(QRect(10, 30, 251, 81));
        sizePolicy2.setHeightForWidth(groupBox_coords->sizePolicy().hasHeightForWidth());
        groupBox_coords->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(11);
        groupBox_coords->setFont(font1);
        lineEdit_KZ = new QLineEdit(groupBox_coords);
        lineEdit_KZ->setObjectName(QString::fromUtf8("lineEdit_KZ"));
        lineEdit_KZ->setGeometry(QRect(110, 50, 41, 24));
        sizePolicy1.setHeightForWidth(lineEdit_KZ->sizePolicy().hasHeightForWidth());
        lineEdit_KZ->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(12);
        lineEdit_KZ->setFont(font2);
        label_KY = new QLabel(groupBox_coords);
        label_KY->setObjectName(QString::fromUtf8("label_KY"));
        label_KY->setGeometry(QRect(70, 20, 31, 31));
        sizePolicy2.setHeightForWidth(label_KY->sizePolicy().hasHeightForWidth());
        label_KY->setSizePolicy(sizePolicy2);
        label_KY->setFont(font2);
        label_KX = new QLabel(groupBox_coords);
        label_KX->setObjectName(QString::fromUtf8("label_KX"));
        label_KX->setGeometry(QRect(20, 30, 21, 16));
        sizePolicy2.setHeightForWidth(label_KX->sizePolicy().hasHeightForWidth());
        label_KX->setSizePolicy(sizePolicy2);
        label_KX->setFont(font2);
        lineEdit_KY = new QLineEdit(groupBox_coords);
        lineEdit_KY->setObjectName(QString::fromUtf8("lineEdit_KY"));
        lineEdit_KY->setGeometry(QRect(60, 50, 41, 24));
        sizePolicy1.setHeightForWidth(lineEdit_KY->sizePolicy().hasHeightForWidth());
        lineEdit_KY->setSizePolicy(sizePolicy1);
        lineEdit_KY->setFont(font2);
        label_KZ = new QLabel(groupBox_coords);
        label_KZ->setObjectName(QString::fromUtf8("label_KZ"));
        label_KZ->setGeometry(QRect(120, 30, 21, 16));
        sizePolicy2.setHeightForWidth(label_KZ->sizePolicy().hasHeightForWidth());
        label_KZ->setSizePolicy(sizePolicy2);
        label_KZ->setFont(font2);
        lineEdit_KX = new QLineEdit(groupBox_coords);
        lineEdit_KX->setObjectName(QString::fromUtf8("lineEdit_KX"));
        lineEdit_KX->setGeometry(QRect(10, 50, 41, 24));
        sizePolicy1.setHeightForWidth(lineEdit_KX->sizePolicy().hasHeightForWidth());
        lineEdit_KX->setSizePolicy(sizePolicy1);
        lineEdit_KX->setFont(font2);
        groupBox_ScaleCenter = new QGroupBox(groupBox_scale);
        groupBox_ScaleCenter->setObjectName(QString::fromUtf8("groupBox_ScaleCenter"));
        groupBox_ScaleCenter->setGeometry(QRect(10, 120, 251, 111));
        sizePolicy2.setHeightForWidth(groupBox_ScaleCenter->sizePolicy().hasHeightForWidth());
        groupBox_ScaleCenter->setSizePolicy(sizePolicy2);
        groupBox_ScaleCenter->setFont(font2);
        label_XM = new QLabel(groupBox_ScaleCenter);
        label_XM->setObjectName(QString::fromUtf8("label_XM"));
        label_XM->setGeometry(QRect(20, 60, 31, 16));
        sizePolicy2.setHeightForWidth(label_XM->sizePolicy().hasHeightForWidth());
        label_XM->setSizePolicy(sizePolicy2);
        lineEdit_ZM = new QLineEdit(groupBox_ScaleCenter);
        lineEdit_ZM->setObjectName(QString::fromUtf8("lineEdit_ZM"));
        lineEdit_ZM->setEnabled(false);
        lineEdit_ZM->setGeometry(QRect(110, 80, 41, 24));
        sizePolicy1.setHeightForWidth(lineEdit_ZM->sizePolicy().hasHeightForWidth());
        lineEdit_ZM->setSizePolicy(sizePolicy1);
        lineEdit_XM = new QLineEdit(groupBox_ScaleCenter);
        lineEdit_XM->setObjectName(QString::fromUtf8("lineEdit_XM"));
        lineEdit_XM->setEnabled(false);
        lineEdit_XM->setGeometry(QRect(10, 80, 41, 24));
        sizePolicy1.setHeightForWidth(lineEdit_XM->sizePolicy().hasHeightForWidth());
        lineEdit_XM->setSizePolicy(sizePolicy1);
        label_YM = new QLabel(groupBox_ScaleCenter);
        label_YM->setObjectName(QString::fromUtf8("label_YM"));
        label_YM->setGeometry(QRect(70, 50, 31, 31));
        sizePolicy2.setHeightForWidth(label_YM->sizePolicy().hasHeightForWidth());
        label_YM->setSizePolicy(sizePolicy2);
        lineEdit_YM = new QLineEdit(groupBox_ScaleCenter);
        lineEdit_YM->setObjectName(QString::fromUtf8("lineEdit_YM"));
        lineEdit_YM->setEnabled(false);
        lineEdit_YM->setGeometry(QRect(60, 80, 41, 24));
        sizePolicy1.setHeightForWidth(lineEdit_YM->sizePolicy().hasHeightForWidth());
        lineEdit_YM->setSizePolicy(sizePolicy1);
        label_ZM = new QLabel(groupBox_ScaleCenter);
        label_ZM->setObjectName(QString::fromUtf8("label_ZM"));
        label_ZM->setGeometry(QRect(120, 60, 31, 16));
        sizePolicy2.setHeightForWidth(label_ZM->sizePolicy().hasHeightForWidth());
        label_ZM->setSizePolicy(sizePolicy2);
        checkBox_UseCenterScale = new QCheckBox(groupBox_ScaleCenter);
        checkBox_UseCenterScale->setObjectName(QString::fromUtf8("checkBox_UseCenterScale"));
        checkBox_UseCenterScale->setGeometry(QRect(10, 30, 171, 21));
        sizePolicy3.setHeightForWidth(checkBox_UseCenterScale->sizePolicy().hasHeightForWidth());
        checkBox_UseCenterScale->setSizePolicy(sizePolicy3);
        checkBox_UseCenterScale->setFont(font2);
        checkBox_UseCenterScale->setChecked(true);
        button_scale = new QPushButton(groupBox_scale);
        button_scale->setObjectName(QString::fromUtf8("button_scale"));
        button_scale->setEnabled(false);
        button_scale->setGeometry(QRect(10, 240, 191, 24));
        sizePolicy3.setHeightForWidth(button_scale->sizePolicy().hasHeightForWidth());
        button_scale->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(groupBox_scale);

        groupBox_rotation = new QGroupBox(centralwidget);
        groupBox_rotation->setObjectName(QString::fromUtf8("groupBox_rotation"));
        sizePolicy.setHeightForWidth(groupBox_rotation->sizePolicy().hasHeightForWidth());
        groupBox_rotation->setSizePolicy(sizePolicy);
        groupBox_rotation->setMinimumSize(QSize(0, 280));
        groupBox_rotation->setMaximumSize(QSize(16777215, 280));
        groupBox_rotation->setFont(font);
        groupBox_degree = new QGroupBox(groupBox_rotation);
        groupBox_degree->setObjectName(QString::fromUtf8("groupBox_degree"));
        groupBox_degree->setGeometry(QRect(10, 30, 161, 81));
        sizePolicy2.setHeightForWidth(groupBox_degree->sizePolicy().hasHeightForWidth());
        groupBox_degree->setSizePolicy(sizePolicy2);
        QFont font3;
        font3.setPointSize(13);
        groupBox_degree->setFont(font3);
        label_dgZ = new QLabel(groupBox_degree);
        label_dgZ->setObjectName(QString::fromUtf8("label_dgZ"));
        label_dgZ->setGeometry(QRect(110, 20, 41, 31));
        sizePolicy2.setHeightForWidth(label_dgZ->sizePolicy().hasHeightForWidth());
        label_dgZ->setSizePolicy(sizePolicy2);
        label_dgZ->setFont(font3);
        lineEdit_dgX = new QLineEdit(groupBox_degree);
        lineEdit_dgX->setObjectName(QString::fromUtf8("lineEdit_dgX"));
        lineEdit_dgX->setGeometry(QRect(10, 50, 41, 24));
        sizePolicy1.setHeightForWidth(lineEdit_dgX->sizePolicy().hasHeightForWidth());
        lineEdit_dgX->setSizePolicy(sizePolicy1);
        lineEdit_dgX->setFont(font2);
        lineEdit_dgY = new QLineEdit(groupBox_degree);
        lineEdit_dgY->setObjectName(QString::fromUtf8("lineEdit_dgY"));
        lineEdit_dgY->setGeometry(QRect(60, 50, 41, 24));
        sizePolicy1.setHeightForWidth(lineEdit_dgY->sizePolicy().hasHeightForWidth());
        lineEdit_dgY->setSizePolicy(sizePolicy1);
        lineEdit_dgY->setFont(font2);
        label_dgX = new QLabel(groupBox_degree);
        label_dgX->setObjectName(QString::fromUtf8("label_dgX"));
        label_dgX->setGeometry(QRect(10, 19, 41, 31));
        sizePolicy2.setHeightForWidth(label_dgX->sizePolicy().hasHeightForWidth());
        label_dgX->setSizePolicy(sizePolicy2);
        label_dgX->setFont(font3);
        label_dgY = new QLabel(groupBox_degree);
        label_dgY->setObjectName(QString::fromUtf8("label_dgY"));
        label_dgY->setGeometry(QRect(60, 19, 41, 31));
        sizePolicy2.setHeightForWidth(label_dgY->sizePolicy().hasHeightForWidth());
        label_dgY->setSizePolicy(sizePolicy2);
        label_dgY->setFont(font3);
        lineEdit_dgZ = new QLineEdit(groupBox_degree);
        lineEdit_dgZ->setObjectName(QString::fromUtf8("lineEdit_dgZ"));
        lineEdit_dgZ->setGeometry(QRect(110, 50, 41, 24));
        sizePolicy1.setHeightForWidth(lineEdit_dgZ->sizePolicy().hasHeightForWidth());
        lineEdit_dgZ->setSizePolicy(sizePolicy1);
        lineEdit_dgZ->setFont(font2);
        groupBox_RotCenter = new QGroupBox(groupBox_rotation);
        groupBox_RotCenter->setObjectName(QString::fromUtf8("groupBox_RotCenter"));
        groupBox_RotCenter->setGeometry(QRect(10, 120, 181, 111));
        sizePolicy2.setHeightForWidth(groupBox_RotCenter->sizePolicy().hasHeightForWidth());
        groupBox_RotCenter->setSizePolicy(sizePolicy2);
        groupBox_RotCenter->setFont(font3);
        label_XC = new QLabel(groupBox_RotCenter);
        label_XC->setObjectName(QString::fromUtf8("label_XC"));
        label_XC->setGeometry(QRect(20, 56, 31, 20));
        sizePolicy2.setHeightForWidth(label_XC->sizePolicy().hasHeightForWidth());
        label_XC->setSizePolicy(sizePolicy2);
        lineEdit_ZC = new QLineEdit(groupBox_RotCenter);
        lineEdit_ZC->setObjectName(QString::fromUtf8("lineEdit_ZC"));
        lineEdit_ZC->setEnabled(false);
        lineEdit_ZC->setGeometry(QRect(110, 80, 41, 24));
        sizePolicy1.setHeightForWidth(lineEdit_ZC->sizePolicy().hasHeightForWidth());
        lineEdit_ZC->setSizePolicy(sizePolicy1);
        lineEdit_XC = new QLineEdit(groupBox_RotCenter);
        lineEdit_XC->setObjectName(QString::fromUtf8("lineEdit_XC"));
        lineEdit_XC->setEnabled(false);
        lineEdit_XC->setGeometry(QRect(10, 80, 41, 24));
        sizePolicy1.setHeightForWidth(lineEdit_XC->sizePolicy().hasHeightForWidth());
        lineEdit_XC->setSizePolicy(sizePolicy1);
        label_YC = new QLabel(groupBox_RotCenter);
        label_YC->setObjectName(QString::fromUtf8("label_YC"));
        label_YC->setGeometry(QRect(70, 50, 31, 31));
        sizePolicy2.setHeightForWidth(label_YC->sizePolicy().hasHeightForWidth());
        label_YC->setSizePolicy(sizePolicy2);
        lineEdit_YC = new QLineEdit(groupBox_RotCenter);
        lineEdit_YC->setObjectName(QString::fromUtf8("lineEdit_YC"));
        lineEdit_YC->setEnabled(false);
        lineEdit_YC->setGeometry(QRect(60, 80, 41, 24));
        sizePolicy1.setHeightForWidth(lineEdit_YC->sizePolicy().hasHeightForWidth());
        lineEdit_YC->setSizePolicy(sizePolicy1);
        label_ZC = new QLabel(groupBox_RotCenter);
        label_ZC->setObjectName(QString::fromUtf8("label_ZC"));
        label_ZC->setGeometry(QRect(120, 56, 31, 20));
        sizePolicy2.setHeightForWidth(label_ZC->sizePolicy().hasHeightForWidth());
        label_ZC->setSizePolicy(sizePolicy2);
        checkBox_UseCenterRotation = new QCheckBox(groupBox_RotCenter);
        checkBox_UseCenterRotation->setObjectName(QString::fromUtf8("checkBox_UseCenterRotation"));
        checkBox_UseCenterRotation->setGeometry(QRect(10, 30, 171, 21));
        sizePolicy3.setHeightForWidth(checkBox_UseCenterRotation->sizePolicy().hasHeightForWidth());
        checkBox_UseCenterRotation->setSizePolicy(sizePolicy3);
        checkBox_UseCenterRotation->setFont(font2);
        checkBox_UseCenterRotation->setChecked(true);
        button_rotate = new QPushButton(groupBox_rotation);
        button_rotate->setObjectName(QString::fromUtf8("button_rotate"));
        button_rotate->setEnabled(false);
        button_rotate->setGeometry(QRect(10, 240, 161, 24));
        sizePolicy3.setHeightForWidth(button_rotate->sizePolicy().hasHeightForWidth());
        button_rotate->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(groupBox_rotation);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox_ObjManage = new QGroupBox(centralwidget);
        groupBox_ObjManage->setObjectName(QString::fromUtf8("groupBox_ObjManage"));
        sizePolicy2.setHeightForWidth(groupBox_ObjManage->sizePolicy().hasHeightForWidth());
        groupBox_ObjManage->setSizePolicy(sizePolicy2);
        groupBox_ObjManage->setMinimumSize(QSize(350, 120));
        groupBox_ObjManage->setMaximumSize(QSize(360, 120));
        groupBox_ObjManage->setFont(font);
        lineEdit_file = new QLineEdit(groupBox_ObjManage);
        lineEdit_file->setObjectName(QString::fromUtf8("lineEdit_file"));
        lineEdit_file->setGeometry(QRect(10, 43, 181, 31));
        lineEdit_file->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineEdit_file->setReadOnly(false);
        pushButton_load = new QPushButton(groupBox_ObjManage);
        pushButton_load->setObjectName(QString::fromUtf8("pushButton_load"));
        pushButton_load->setEnabled(false);
        pushButton_load->setGeometry(QRect(10, 80, 181, 31));
        pushButton_unload = new QPushButton(groupBox_ObjManage);
        pushButton_unload->setObjectName(QString::fromUtf8("pushButton_unload"));
        pushButton_unload->setEnabled(false);
        pushButton_unload->setGeometry(QRect(200, 80, 151, 31));
        pushButton_choose = new QPushButton(groupBox_ObjManage);
        pushButton_choose->setObjectName(QString::fromUtf8("pushButton_choose"));
        pushButton_choose->setGeometry(QRect(200, 43, 151, 31));

        horizontalLayout->addWidget(groupBox_ObjManage);

        groupBox_object_center = new QGroupBox(centralwidget);
        groupBox_object_center->setObjectName(QString::fromUtf8("groupBox_object_center"));
        sizePolicy2.setHeightForWidth(groupBox_object_center->sizePolicy().hasHeightForWidth());
        groupBox_object_center->setSizePolicy(sizePolicy2);
        groupBox_object_center->setMinimumSize(QSize(230, 120));
        groupBox_object_center->setMaximumSize(QSize(360, 120));
        groupBox_object_center->setFont(font);
        lineEdit_center_x = new QLineEdit(groupBox_object_center);
        lineEdit_center_x->setObjectName(QString::fromUtf8("lineEdit_center_x"));
        lineEdit_center_x->setGeometry(QRect(30, 40, 181, 24));
        lineEdit_center_x->setReadOnly(true);
        lineEdit_center_y = new QLineEdit(groupBox_object_center);
        lineEdit_center_y->setObjectName(QString::fromUtf8("lineEdit_center_y"));
        lineEdit_center_y->setGeometry(QRect(30, 80, 181, 24));
        lineEdit_center_y->setReadOnly(true);
        label_center_x = new QLabel(groupBox_object_center);
        label_center_x->setObjectName(QString::fromUtf8("label_center_x"));
        label_center_x->setGeometry(QRect(10, 40, 21, 16));
        sizePolicy2.setHeightForWidth(label_center_x->sizePolicy().hasHeightForWidth());
        label_center_x->setSizePolicy(sizePolicy2);
        label_center_y = new QLabel(groupBox_object_center);
        label_center_y->setObjectName(QString::fromUtf8("label_center_y"));
        label_center_y->setGeometry(QRect(10, 80, 21, 16));
        sizePolicy2.setHeightForWidth(label_center_y->sizePolicy().hasHeightForWidth());
        label_center_y->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(groupBox_object_center);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        label_graphics = new QLabel(centralwidget);
        label_graphics->setObjectName(QString::fromUtf8("label_graphics"));
        label_graphics->setFont(font);

        verticalLayout_2->addWidget(label_graphics);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setRenderHints(QPainter::Antialiasing|QPainter::HighQualityAntialiasing|QPainter::SmoothPixmapTransform|QPainter::TextAntialiasing);

        verticalLayout_2->addWidget(graphicsView);


        horizontalLayout_2->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(checkBox_UseCenterScale, SIGNAL(toggled(bool)), lineEdit_XM, SLOT(setDisabled(bool)));
        QObject::connect(checkBox_UseCenterScale, SIGNAL(toggled(bool)), lineEdit_YM, SLOT(setDisabled(bool)));
        QObject::connect(checkBox_UseCenterScale, SIGNAL(toggled(bool)), lineEdit_ZM, SLOT(setDisabled(bool)));
        QObject::connect(checkBox_UseCenterRotation, SIGNAL(toggled(bool)), lineEdit_XC, SLOT(setDisabled(bool)));
        QObject::connect(checkBox_UseCenterRotation, SIGNAL(toggled(bool)), lineEdit_YC, SLOT(setDisabled(bool)));
        QObject::connect(checkBox_UseCenterRotation, SIGNAL(toggled(bool)), lineEdit_ZC, SLOT(setDisabled(bool)));
        QObject::connect(pushButton_load, SIGNAL(clicked(bool)), button_move, SLOT(setDisabled(bool)));
        QObject::connect(pushButton_load, SIGNAL(clicked(bool)), button_scale, SLOT(setDisabled(bool)));
        QObject::connect(pushButton_load, SIGNAL(clicked(bool)), button_rotate, SLOT(setDisabled(bool)));
        QObject::connect(pushButton_unload, SIGNAL(clicked(bool)), button_move, SLOT(setEnabled(bool)));
        QObject::connect(pushButton_unload, SIGNAL(clicked(bool)), button_scale, SLOT(setEnabled(bool)));
        QObject::connect(pushButton_unload, SIGNAL(clicked(bool)), button_rotate, SLOT(setEnabled(bool)));
        QObject::connect(pushButton_load, SIGNAL(clicked(bool)), pushButton_unload, SLOT(setDisabled(bool)));
        QObject::connect(pushButton_load, SIGNAL(clicked(bool)), pushButton_choose, SLOT(setEnabled(bool)));
        QObject::connect(pushButton_load, SIGNAL(clicked(bool)), pushButton_load, SLOT(setEnabled(bool)));
        QObject::connect(pushButton_unload, SIGNAL(clicked(bool)), pushButton_unload, SLOT(setEnabled(bool)));
        QObject::connect(pushButton_unload, SIGNAL(clicked(bool)), pushButton_load, SLOT(setDisabled(bool)));
        QObject::connect(pushButton_unload, SIGNAL(clicked(bool)), pushButton_choose, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "3D Viewer", nullptr));
        groupBox_move->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\275\320\276\321\201", nullptr));
        lineEdit_dx->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        lineEdit_dy->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        lineEdit_dz->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_dx->setText(QCoreApplication::translate("MainWindow", "dx", nullptr));
        label_dy->setText(QCoreApplication::translate("MainWindow", "dy", nullptr));
        label_dz->setText(QCoreApplication::translate("MainWindow", "dz", nullptr));
        button_move->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\275\320\265\321\201\321\202\320\270", nullptr));
        groupBox_scale->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        groupBox_coords->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\215\321\204\321\204-\321\202\321\213 \320\274\320\260\321\201\321\210\321\202\320\260\320\261\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        lineEdit_KZ->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_KY->setText(QCoreApplication::translate("MainWindow", "ky", nullptr));
        label_KX->setText(QCoreApplication::translate("MainWindow", "kx", nullptr));
        lineEdit_KY->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_KZ->setText(QCoreApplication::translate("MainWindow", "kz", nullptr));
        lineEdit_KX->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        groupBox_ScaleCenter->setTitle(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200 \320\274\320\260\321\201\321\210\321\202\320\260\320\261\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        label_XM->setText(QCoreApplication::translate("MainWindow", "xm", nullptr));
        lineEdit_ZM->setText(QString());
        lineEdit_XM->setText(QString());
        label_YM->setText(QCoreApplication::translate("MainWindow", "ym", nullptr));
        lineEdit_YM->setText(QString());
        label_ZM->setText(QCoreApplication::translate("MainWindow", "zm", nullptr));
        checkBox_UseCenterScale->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200 \320\276\320\261\321\212\320\265\320\272\321\202\320\260", nullptr));
        button_scale->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        groupBox_rotation->setTitle(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \320\276\321\200\320\270\320\265\320\275\321\202\320\260\321\206\320\270\320\270", nullptr));
        groupBox_degree->setTitle(QCoreApplication::translate("MainWindow", "\320\243\320\263\320\276\320\273 \320\277\320\276\320\262\320\276\321\200\320\276\321\202\320\260", nullptr));
        label_dgZ->setText(QCoreApplication::translate("MainWindow", "dgZ", nullptr));
        lineEdit_dgX->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        lineEdit_dgY->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_dgX->setText(QCoreApplication::translate("MainWindow", "dgX", nullptr));
        label_dgY->setText(QCoreApplication::translate("MainWindow", "dgY", nullptr));
        lineEdit_dgZ->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        groupBox_RotCenter->setTitle(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200 \320\262\321\200\320\260\321\211\320\265\320\275\320\270\321\217", nullptr));
        label_XC->setText(QCoreApplication::translate("MainWindow", "xc", nullptr));
        lineEdit_ZC->setText(QString());
        lineEdit_XC->setText(QString());
        label_YC->setText(QCoreApplication::translate("MainWindow", "yc", nullptr));
        lineEdit_YC->setText(QString());
        label_ZC->setText(QCoreApplication::translate("MainWindow", "zc", nullptr));
        checkBox_UseCenterRotation->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200 \320\276\320\261\321\212\320\265\320\272\321\202\320\260", nullptr));
        button_rotate->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\320\265\321\200\320\275\321\203\321\202\321\214", nullptr));
        groupBox_ObjManage->setTitle(QCoreApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\276\320\261\321\212\320\265\320\272\321\202\320\276\320\274", nullptr));
        pushButton_load->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        pushButton_unload->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        pushButton_choose->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        groupBox_object_center->setTitle(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200 \320\276\320\261\321\212\320\265\320\272\321\202\320\260", nullptr));
        lineEdit_center_x->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lineEdit_center_y->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_center_x->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_center_y->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_graphics->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\261\320\276\321\207\320\265\320\265 \320\277\321\200\320\276\321\201\321\202\321\200\320\260\320\275\321\201\321\202\320\262\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
