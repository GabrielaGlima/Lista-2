/*6. Crie um algoritmo que o usuário informa o tamanho e os dados do vetor de
inteiros, e apresenta quantos números no vetor são pares e quantos são
ímpares.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamv;
    printf("Escreva o tamanho do vetor:\n");
    scanf("%d",&tamv);

    int vetor[tamv],i,conti=0,contp=0;
    for ( i = 0; i < tamv; i++){
        printf("Escreva os valores do vetor:\n");
        scanf("%d",&vetor[i]);
        if (vetor[i] % 2 == 0){
            contp+=1;
        }else{
            conti+=1;
        }
        
    }
    printf("Quantidade de pares:%d\n",contp);
    printf("Quantidade de impares:%d\n", conti);

    system("PAUSE");
    return 0; 
}