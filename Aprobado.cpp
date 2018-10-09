#include <stdio.h>
#include <conio.h>

int main()
{
    float nota;
    
    printf("\n Introduzca calificacion:  ");
    scanf("%f", &nota);
    
    if (nota>=70)
      printf("\n ¡FELICIDADES HAS APROBADO! ");
    else
    printf("\n ¡CONTINUA CON TUS ESTUDIOS, NECESITAS ESFORZARTE MAS ! ");
    getch();
    return 0;
}    
