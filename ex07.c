/*7. Dados 20 números, exibir a média aritmética dos números pares e a média
aritmética dos números ímpares.*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 4
int main(){

    int i,vetor[TAM];
    float contp=0,conti=0,mpar=0,mimp=0;

    for ( i = 0; i < TAM; i++){
        printf("Escreva os valores do vetor:\n");
        scanf("%d",&vetor[i]);
        if (vetor[i] % 2 == 0){
            contp+=1;
            mpar+=vetor[i];
        }else{
            conti+=1;
            mimp+=vetor[i];
        }
    }
    printf("Media par:%.2f\n",mpar/contp);
    printf("Media impar:%.2f\n",mimp/conti);

    system("PAUSE");
    return 0;
}