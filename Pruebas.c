//
// Created by Roselyne on 23/11/2024.
//
#include <stdio.h>
//Declarar funciones
void piramide_alreves();

int main(void) {
    /* Se nos pide una piramide con el numero de filas y columnas que el usuario coloque
     * pero que vaya del numero mayor orientada en direccion hacia la izquierda. */
    piramide_alreves();
    return 0;
}

void piramide_alreves() {
    int filas = 0;

    printf("Ingrese el numero de filas:\n");
    scanf(" %d", &filas);

    for (int i = 1; i <= filas; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}