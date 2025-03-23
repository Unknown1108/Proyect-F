#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ProyectF.h"

class ProyectF : public QMainWindow
{
    Q_OBJECT

public:
    ProyectF(QWidget *parent = nullptr);
    ~ProyectF();

private:
    Ui::ProyectFClass ui;
};
