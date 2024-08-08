#ifndef CLOCKW_H
#define CLOCKW_H

#include <QWidget>
#include <QDateTime>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class ClockW; }
QT_END_NAMESPACE

class ClockW : public QWidget
{
    Q_OBJECT

public:
    ClockW(QWidget *parent = nullptr);
    ~ClockW();

private slots:
    void on_pushButton_clicked();

    void onQTimer1();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::ClockW *ui;
    int status,status1,status2,status3;
    int meridiano;

    QTimer *QTimer1;
};
#endif // CLOCKW_H
