    //
    // Created by Roselyne on 23/11/2024.
    //
    #include <stdio.h>
    //Declarar funciones.
    void piramide_alreves();
    void piramide_derecha();
    void piramide_izquierda();
    void piramide_abajo_d();
    void piramide_abajo_i();


    int main(void) {
        //Desplegar una piramide con el numero de filas y numero de columnas.
        //Llamar a la funcion.
        piramide_alreves();
        piramide_derecha();
        piramide_izquierda();
        piramide_abajo_d();
        piramide_abajo_i();
        return 0;
    }
    //Definir funciones.
    void piramide_alreves()
    {
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
    void piramide_derecha() {
        int filas = 0;
        int columnas = 0;

        printf("Ingrese el numero de filas:\n");
        scanf("%d", &filas);

        for (int intentos; intentos <= filas; intentos++)
        {
            for (columnas = 1; columnas <= intentos; columnas++)
            {
                printf("%d ",columnas);
            }
            printf("\n");
        }

    }
    void piramide_izquierda()
    {
        int filas = 0;

        printf("Ingrese el numero de filas:\n");
        scanf(" %d", &filas);

        //Cuantas filas habra.
        for (int i = 1; i <= filas; i++)
        {
            for (int j = filas; j > i; j--)
            {
                printf(" ");
            }
            for (int num = i; num >= 1; num--)
            {
                printf("%d", num);
            }
            printf("\n");
        }
    }
    void piramide_abajo_d(){
        int filas = 0;
        int columnas = 0;

        printf("Ingrese el numero de filas:\n");
        scanf("%d", &filas);

        for (int intentos = filas; intentos >= 1; intentos--)
        {
            for (columnas = 1; columnas <= intentos; columnas++)
            {
                printf("%d ",columnas);
            }
            printf("\n");
        }
    }
    void piramide_abajo_i()
    {
        int filas = 0;

        printf("Ingrese el numero de filas:\n");
        scanf("%d", &filas);

        //Cuantas filas habra.
        for (int intentos = filas; intentos >= 1; intentos--)
        {
            //Realizamos la impresion de espacios.
            for (int espacios = 0; espacios < filas - intentos; espacios++)
            {
                printf(" ");
            }
            //Se imprimen los numeros.
            for (int columnas = intentos; columnas >= 1; columnas--)
            {
                printf("%d",columnas);
            }
            printf("\n");
        }
    }
