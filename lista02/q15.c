/* 15. Elaborar um programa que apresente os resultados das portencias do valor de base 3, elevado a um
expoente que varie do valor 0 a 7. */

#include <stdio.h>
#include <math.h>

int main()
{
    double i;
    
    for(i = 0; i <= 7; i++){
        printf("3^%.0lf = %.0lf\n",i, pow(3, i));
    }

    return 0;
}