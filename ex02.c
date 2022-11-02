/*2. Faça um programa que coloque os números de 5 a 1 em um vetor de tamanho
5.*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int main(){
    int i,vetor[5];

    for ( i = 0; i < TAM; i++){
        printf("%d\n",vetor[i] = 5-i);
    }
    
    system("PAUSE");
    return 0;
}