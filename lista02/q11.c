/* 11. Refaca a questao 10, considerando que os limites da faixa (A e B) sejam fornecidos pelo usuario.
O programa deve funcionar tanto para A > B quanto para B > A. */

#include <stdio.h>

int main()
{
    int i, multiplo, quadrado, a, b, valorInicial, valorFinal;
    
    puts("Digite o valor de A: ");
    scanf("%d",&a);
    puts("Digite o valor de B: ");
    scanf("%d",&b);
    
    if(a > b){
        valorInicial = b;
        valorFinal = a;
    }
    else if(a < b){
        valorInicial = a;
        valorFinal = b;
    }
    else{
        valorInicial = a;
        valorFinal = b;
    }
    
    for(i = valorInicial; i <= valorFinal; i++){
        if(i % 4 == 0){
            multiplo = i;
            quadrado = multiplo*multiplo;
            printf("Quadrado de %d: %d\n",multiplo, quadrado);
        }   
    }
    
    return 0;
}