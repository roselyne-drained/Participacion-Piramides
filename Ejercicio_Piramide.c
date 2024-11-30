//
// Created by Roselyne on 23/11/2024.
//
#include <stdio.h>
//Declarar funciones.
void piramide();

int main(void) {
    //Desplegar una piramide con el numero de filas y numero de columnas.
    //Llamar a la funcion.
    piramide();
    return 0;
}
//Definir funciones.
void piramide() {
    int filas = 0;

    printf("Ingrese el numero de filas:\n");
    scanf(" %d", &filas);

    for (int i = 0; i <= filas; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

}