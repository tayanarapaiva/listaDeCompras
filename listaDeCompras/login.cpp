
#include "login.h"
#include "ui_login.h"
#include"fm_principal.h"

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    setWindowTitle("Login");
}

login::~login()
{
    delete ui;
}

void login::on_btn_login_clicked()
{
    QString username = ui->txt_username ->text();
    QString senha=ui->txt_senha->text();




    if(username=="ifpb"&& senha=="engenharia"){
        fm_principal f_principal;

        f_principal.exec();

        close();
    }else{
        QMessageBox::information(this,"aviso","Username ou senha incorretos");
        QMessageBox::warning(this,"login","A senha e username estão no guia");
        ui->txt_username->clear();
        ui->txt_senha->clear();
        ui->txt_username->setFocus();

    }


}

