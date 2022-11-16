/*9. Dadas a idade e peso de 20 pessoas, exibir a média aritmética dos pesos das
pessoas da mesma faixa etária. As faixas etárias são: de 1 a 10 anos, de 11 a 20
anos, de 21 a 30 anos e maiores de 30 anos.*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 6

int main(){
    float vetori[TAM],vetorp[TAM],contp1=0,contp2=0,contp3=0,mp1=0,mp2=0,mp3=0;
    int i;
    for ( i = 0; i < TAM; i++){
        printf("escreva a idade e o peso:\n");
        scanf("%f%f",&vetori[i],&vetorp[i]);
       
    if (vetori[i]>=1 && vetori[i]<=10){
        contp1+=1;
        mp1+=vetorp[i];
    }else if (vetori[i]>=11 && vetori[i]<=20){
        contp2+=1;
        mp2+=vetorp[i];
    }else if (vetori[i]>=21 && vetori[i]<=30){
        contp3+=1;
        mp3+=vetorp[i];
    }
  }
    printf("de 1 a 10 anos:%.2f\n",mp1/contp1);
    printf("de 11 a 20 anos:%.2f\n",mp2/contp2);
    printf("de 21 a 30 anos:%.2f\n",mp3/contp3);
    
    system("PAUSE");
    return 0;
}