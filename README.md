# Calculadora-ISR-DGII

Este es un programa simple en **C++** para calcular el Impuesto Sobre la Renta (ISR) de un empleado aquí en República Dominicana, actualizado con las escalas oficiales de la DGII para este año 2026. 

 ¿Qué hace el programa?

El flujo de cálculo es exactamente el que manda la ley:

1. **Quita la TSS primero:** Al sueldo bruto que pones, le descuenta el **5.91%** de la Seguridad Social: SFS + AFP.
2. **Saca el sueldo gravable:** Lo que queda es lo que la DGII realmente revisa para cobrar impuestos.
3. **Aplica la escala mensual de 2026:**
   * **Hasta RD$ 34,685.00** - Exento (Da `0` o `N/A`).
   * **De RD$ 34,685.01 a RD$ 52,027.42** - 15% del excedente.
   * **De RD$ 52,027.43 a RD$ 72,260.25** -  Cuota fija de RD$ 2,601.33 + 20% del excedente.
   * **Más de RD$ 72,260.25** - Cuota fija de RD$ 6,648.00 + 25% del excedente.

Pruebas del Programa (Escenarios en Ejecución)

Aquí están las capturas de pantalla de la consola corriendo en los 4 tramos de la DGII:
<img width="1109" height="614" alt="Screenshot 2026-07-19 025905" src="https://github.com/user-attachments/assets/b01c6320-937f-498c-99ba-5d9bead26343" />




 1. Caso Exento (Sueldo bajo el límite)
* **Sueldo probado:** RD$ 35,000.00 bruto (al quitar la TSS, cae en el tramo exento).
* [Exento]

2. Tramo del 15%
* **Sueldo probado:** RD$ 50,000.00 bruto.
* [Tramo 15%]

 3. Tramo del 20%
* **Sueldo probado:** RD$ 70,000.00 bruto.
* [Tramo 20%]

 4. Tramo del 25% (El tope)
* **Sueldo probado:** RD$ 100,000.00 bruto.
* [Tramo 25%]
