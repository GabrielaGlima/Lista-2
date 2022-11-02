/*1. Faça um programa em C que inicializa um vetor de tamanho 10 com o valor 0.
*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main(){
    int i,vetor[TAM] ={0};

    for ( i = 0; i < TAM; i++){
       printf("%d\n", vetor[i]);
    }
    
   system("PAUSE");
   return 0;
}