#ifndef GERENCIADORDEARQUIVOS_H
#define GERENCIADORDEARQUIVOS_H

#include <QObject>
#include <QFile>
#include <QTextStream>
#include <fstream>
#include <QDebug>

#include "consumo.h"
#include "compra.h"


class GerenciadorDeArquivos
{
public:
    GerenciadorDeArquivos();
    static bool salvarConsumo(QString &arquivo, Consumo &consumo);
    static bool carregarConsumo(QString &arquivo,  Consumo &consumo);
};

#endif // GERENCIADORDEARQUIVOS_H
