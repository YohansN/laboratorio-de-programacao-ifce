/* 20. Construir um programa que apresente como resultado o fatorial dos valores impares situados na faixa numero de 1 a 10. */

#include <stdio.h>
int main()
{
    int f, fatorial, i = 1;
    
    f = i;
    for(i; i <= 10; i++){
        fatorial = f;
        while(f != 1){
            fatorial = fatorial * (f - 1);
            f = f - 1;
        }
        printf("%d - fatorial: %d\n", i, fatorial);
        f = i+1;
    }

    return 0;
}