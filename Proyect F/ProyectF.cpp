#include "ProyectF.h"
#include <mysql.h>

ProyectF::ProyectF(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    //arreglar/es solo un ejemplo
   // Conectar el bot�n con la funci�n calcularSuma

    /*
    connect(ui.pushButton, &QPushButton::clicked, this, &QtWidgetsApplication2::calcularSuma);
    */

}

ProyectF::~ProyectF()
{}

//ejemplo

/*
 
 // Implementaci�n de la funci�n que suma dos n�meros
    int QtWidgetsApplication2::sumar(int a, int b) {
        return a + b;
    }

    // Funci�n que se activa cuando se presiona el bot�n
    void QtWidgetsApplication2::calcularSuma() {
        int num1 = ui.lineEdit->text().toInt();  // Obtener el primer n�mero
        int num2 = ui.lineEdit_2->text().toInt(); // Obtener el segundo n�mero

        int resultado = sumar(num1, num2);  // Llamar a la funci�n sumar

        // Mostrar el resultado en una ventana emergente
        QMessageBox::information(this, "Resultado", "La suma es: " + QString::number(resultado));
    }
}

*/