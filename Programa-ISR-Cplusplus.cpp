#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Configurar la consola para mostrar dos decimales limpios
    cout << fixed << setprecision(2);

    double sueldoBruto;
    cout << "Ingrese el sueldo mensual bruto del empleado (RD$): ";
    cin >> sueldoBruto;

    // 1. En RD la TSS (Seguridad Social) se descuenta ANTES de calcular el ISR.
    // SFS (Salud) = 3.04% y AFP (Pensión) = 2.87% -> Total: 5.91%
    double descuentoTSS = sueldoBruto * 0.0591;
    double sueldoNetoGravable = sueldoBruto - descuentoTSS;

    double descuentoISR = 0.0;

    // 2. Evaluación de la escala mensual de la DGII para el año 2026
    if (sueldoNetoGravable <= 34685.00) {
        descuentoISR = 0.0; // Exento de impuestos
    }
    else if (sueldoNetoGravable <= 52027.42) {
        descuentoISR = (sueldoNetoGravable - 34685.01) * 0.15;
    }
    else if (sueldoNetoGravable <= 72260.25) {
        descuentoISR = 2601.33 + ((sueldoNetoGravable - 52027.43) * 0.20);
    }
    else {
        descuentoISR = 6648.00 + ((sueldoNetoGravable - 72260.25) * 0.25);
    }

    // 3. Mostrar los resultados requeridos
    cout << "\n================ RESUMEN DE NÓMINA ================\n";
    cout << "Sueldo Bruto ingresado:      RD$ " << sueldoBruto << endl;
    cout << "Descuento de TSS (5.91%):    RD$ " << descuentoTSS << endl;
    cout << "Sueldo Neto Gravable:        RD$ " << sueldoNetoGravable << endl;
    cout << "---------------------------------------------------\n";

    if (descuentoISR > 0) {
        cout << "Descuento de ISR a aplicar:  RD$ " << descuentoISR << endl;
        cout << "Sueldo Neto a recibir:       RD$ " << (sueldoNetoGravable - descuentoISR) << endl;
    }
    else {
        cout << "Descuento de ISR a aplicar:  0 (N/A - Exento)" << endl;
        cout << "Sueldo Neto a recibir:       RD$ " << sueldoNetoGravable << endl;
    }
    cout << "===================================================\n";

    return 0;
}