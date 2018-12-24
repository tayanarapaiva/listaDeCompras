#include "fm_principal.h"
#include "ui_fm_principal.h"

fm_principal::fm_principal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_principal)
{
    ui->setupUi(this);
setWindowTitle("Bem vindo!");
}

fm_principal::~fm_principal()
{
    delete ui;
}

void fm_principal::on_btn_fazerLista_clicked()
{
    fm_dados f_dados;

    f_dados.exec();
}
