#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QMessageBox>
#include <QVector>
#include <numeric>
#include <QFileDialog>
#include <algorithm>

#include "fm_principal.h"
#include"fm_dados.h"


namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_btn_login_clicked();

private:
    Ui::login *ui;
};

#endif // LOGIN_H
