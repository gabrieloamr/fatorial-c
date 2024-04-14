#include <stdio.h>
#include <stdlib.h>

int main(){
    int fatorial;
    int resposta = 1;

    printf("Digite um numero:\n");
    scanf("%d", &fatorial);


    for( ; fatorial >= 1; fatorial --){ // não possui valor inicial
        resposta *= fatorial; // resposta = resposta * fatorial
    }
    
    printf("O fatorial do numero e':%d\n", resposta);

    return 0;
}   