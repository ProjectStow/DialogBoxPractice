#ifndef DIALOG2_H
#define DIALOG2_H

#include <QDialog>

namespace Ui {
class Dialog2;
}

class Dialog2 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog2(QWidget *children = nullptr);
    ~Dialog2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog2 *ui;
};

#endif // DIALOG2_H
