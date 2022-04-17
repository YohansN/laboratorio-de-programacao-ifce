/* 9. A serie de Fibonacci eh formada pela seguinte sequencia: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55... etc.
Escreva um algoritmo que gere a serie de Fibonacci ate o vigesimo termo. */

#include <stdio.h>

int main(){
    
    int i, num = 1, numAnterior = 0, resultado = 1, aux;

    for(i = 0; i < 20; i++){
        printf("%d ",resultado);
        resultado = num + numAnterior;
        aux = num;
        num = resultado;
        numAnterior = aux;
    }

    return 0;
}