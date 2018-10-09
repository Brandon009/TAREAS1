#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
    int numero;
    int cuadrado;
    int cubo;
    
    printf("\n Introduzca un numero entero:  ");
    scanf("%d", &numero);
    
    if(numero % 2 == 0)
       {
       printf("\n ES PAR");
       cuadrado=numero*numero;
       printf("\n el numero al cuadrado es: %d", cuadrado);
} 
    
        else 
        {
        printf("\n ES IMPAR");
        cubo= numero*numero*numero;
        printf("\n El numero al cubo es: %d", cubo);
        }
        getch();
        return 0;
}        
