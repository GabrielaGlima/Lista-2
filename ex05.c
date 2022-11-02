/*5. Faça um algoritmo que leia um vetor de 6 posições. Em seguida, ele conta
quantos valores são negativos e escreva essa informação.*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 6

int main(){
    int i,contn=0;
    float vetor[TAM];
    for ( i = 0; i < TAM; i++){
        printf("Escreva os valores do vetor:\n");
        scanf("%f",&vetor[i]);
        if (vetor[i]<0){
            contn+=1;
        }
    }
    printf("quantidade de numeros negativos:%d\n",contn);
    
    system("PAUSE");
    return 0;
}