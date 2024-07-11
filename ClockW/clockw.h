#ifndef CLOCKW_H
#define CLOCKW_H

#include <QWidget>

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

private:
    Ui::ClockW *ui;
    int status;
};
#endif // CLOCKW_H
