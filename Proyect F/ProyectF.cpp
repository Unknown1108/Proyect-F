#include "ProyectF.h"
#include <mysql.h>

ProyectF::ProyectF(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    //arreglar/es solo un ejemplo
   // Conectar el botón con la función calcularSuma

    /*
    connect(ui.pushButton, &QPushButton::clicked, this, &QtWidgetsApplication2::calcularSuma);
    */

}

ProyectF::~ProyectF()
{}

//ejemplo

/*
 
 // Implementación de la función que suma dos números
    int QtWidgetsApplication2::sumar(int a, int b) {
        return a + b;
    }

    // Función que se activa cuando se presiona el botón
    void QtWidgetsApplication2::calcularSuma() {
        int num1 = ui.lineEdit->text().toInt();  // Obtener el primer número
        int num2 = ui.lineEdit_2->text().toInt(); // Obtener el segundo número

        int resultado = sumar(num1, num2);  // Llamar a la función sumar

        // Mostrar el resultado en una ventana emergente
        QMessageBox::information(this, "Resultado", "La suma es: " + QString::number(resultado));
    }
}

*/