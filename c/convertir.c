#include <stdio.h>

// Tasas de conversión (puedes actualizarlas según la tasa actual)
#define USD_TO_GTQ 7.8
#define EUR_TO_GTQ 8.5
#define GTQ_TO_USD (1 / USD_TO_GTQ)
#define GTQ_TO_EUR (1 / EUR_TO_GTQ)
#define USD_TO_EUR 0.92
#define EUR_TO_USD (1 / USD_TO_EUR)

// Función para convertir entre monedas
void convertirMoneda(double cantidad, int opcion) {
    double resultado;
    switch (opcion) {
        case 1: // GTQ a USD
            resultado = cantidad * GTQ_TO_USD;
            printf("\n%.2f Quetzales = %.2f Dólares\n", cantidad, resultado);
            break;
        case 2: // GTQ a EUR
            resultado = cantidad * GTQ_TO_EUR;
            printf("\n%.2f Quetzales = %.2f Euros\n", cantidad, resultado);
            break;
        case 3: // USD a GTQ
            resultado = cantidad * USD_TO_GTQ;
            printf("\n%.2f Dólares = %.2f Quetzales\n", cantidad, resultado);
            break;
        case 4: // USD a EUR
            resultado = cantidad * USD_TO_EUR;
            printf("\n%.2f Dólares = %.2f Euros\n", cantidad, resultado);
            break;
        case 5: // EUR a GTQ
            resultado = cantidad * EUR_TO_GTQ;
            printf("\n%.2f Euros = %.2f Quetzales\n", cantidad, resultado);
            break;
        case 6: // EUR a USD
            resultado = cantidad * EUR_TO_USD;
            printf("\n%.2f Euros = %.2f Dólares\n", cantidad, resultado);
            break;
        default:
            printf("\nOpción no válida.\n");
    }
}

int main() {
    int opcion;
    double cantidad;

    do {
        // Menú de opciones
        printf("\n==============================\n");
        printf(" CONVERSOR DE MONEDAS\n");
        printf("==============================\n");
        printf("1. Convertir Quetzales a Dólares\n");
        printf("2. Convertir Quetzales a Euros\n");
        printf("3. Convertir Dólares a Quetzales\n");
        printf("4. Convertir Dólares a Euros\n");
        printf("5. Convertir Euros a Quetzales\n");
        printf("6. Convertir Euros a Dólares\n");
        printf("7. Salir\n");
        printf("==============================\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 6) {
            printf("Ingrese la cantidad a convertir: ");
            scanf("%lf", &cantidad);
            convertirMoneda(cantidad, opcion);
        } else if (opcion == 7) {
            printf("\n¡Gracias por usar el conversor de monedas!\n");
        } else {
            printf("\nOpción inválida. Intente de nuevo.\n");
        }
    } while (opcion != 7);

    return 0;
}
