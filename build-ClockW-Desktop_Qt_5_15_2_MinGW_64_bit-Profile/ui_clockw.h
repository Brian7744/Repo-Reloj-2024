/********************************************************************************
** Form generated from reading UI file 'clockw.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOCKW_H
#define UI_CLOCKW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClockW
{
public:
    QFrame *base;
    QFrame *per_1;
    QFrame *per_3;
    QFrame *per_4;
    QFrame *per_5;
    QFrame *frame;
    QLineEdit *lineEdit;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *ClockW)
    {
        if (ClockW->objectName().isEmpty())
            ClockW->setObjectName(QString::fromUtf8("ClockW"));
        ClockW->resize(436, 410);
        ClockW->setMinimumSize(QSize(253, 225));
        ClockW->setCursor(QCursor(Qt::ArrowCursor));
        ClockW->setStyleSheet(QString::fromUtf8("background-color: rgb(41, 54, 60);"));
        base = new QFrame(ClockW);
        base->setObjectName(QString::fromUtf8("base"));
        base->setGeometry(QRect(10, 10, 310, 310));
        base->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 140px;\n"
"/*background-color: rgb(170, 170, 127);fondo marron*/\n"
"background-color: rgb(85,85,127);\n"
""));
        base->setFrameShape(QFrame::NoFrame);
        base->setFrameShadow(QFrame::Raised);
        per_1 = new QFrame(base);
        per_1->setObjectName(QString::fromUtf8("per_1"));
        per_1->setGeometry(QRect(135, 7, 40, 40));
        per_1->setStyleSheet(QString::fromUtf8("background-color: rgb(99, 99, 167);\n"
"border-radius: 20px;"));
        per_1->setFrameShape(QFrame::NoFrame);
        per_1->setFrameShadow(QFrame::Raised);
        per_3 = new QFrame(base);
        per_3->setObjectName(QString::fromUtf8("per_3"));
        per_3->setGeometry(QRect(135, 263, 40, 40));
        per_3->setStyleSheet(QString::fromUtf8("background-color: rgb(99, 99, 167);\n"
"border-radius: 20px;"));
        per_3->setFrameShape(QFrame::NoFrame);
        per_3->setFrameShadow(QFrame::Raised);
        per_4 = new QFrame(base);
        per_4->setObjectName(QString::fromUtf8("per_4"));
        per_4->setGeometry(QRect(262, 130, 40, 40));
        per_4->setStyleSheet(QString::fromUtf8("background-color: rgb(99, 99, 167);\n"
"border-radius: 20px;"));
        per_4->setFrameShape(QFrame::NoFrame);
        per_4->setFrameShadow(QFrame::Raised);
        per_5 = new QFrame(base);
        per_5->setObjectName(QString::fromUtf8("per_5"));
        per_5->setGeometry(QRect(8, 130, 40, 40));
        per_5->setStyleSheet(QString::fromUtf8("background-color: rgb(99, 99, 167);\n"
"border-radius: 20px;"));
        per_5->setFrameShape(QFrame::NoFrame);
        per_5->setFrameShadow(QFrame::Raised);
        frame = new QFrame(base);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(60, 60, 190, 190));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(99, 99, 167);\n"
"border-radius: 80px;"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 80, 131, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayoutWidget = new QWidget(ClockW);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(341, 10, 82, 121));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);


        retranslateUi(ClockW);

        QMetaObject::connectSlotsByName(ClockW);
    } // setupUi

    void retranslateUi(QWidget *ClockW)
    {
        ClockW->setWindowTitle(QCoreApplication::translate("ClockW", "Reloj Warcraft III", nullptr));
        pushButton->setText(QCoreApplication::translate("ClockW", "Init", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ClockW", "Init", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ClockW", "Init", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ClockW", "Init", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClockW: public Ui_ClockW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCKW_H
