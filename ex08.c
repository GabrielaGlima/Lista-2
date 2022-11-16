/*8. Dados os salários brutos de 20 pessoas, exibir o desconto do INSS para cada
pessoa segundo a tabela abaixo:
Salário                                   |         Percentual de desconto
Menor ou igual a R$ 600,00                |                 Isento
Maior que R$ 600,00 e menor ou igual      |                  20%
a R$ 1200,00                              |           
Maior que R$ 1200,00 e menor ou           |                  25%
igual R$ 2000,00                          |
Maior que R$ 2000,00                      |                  30%*/

/*COLOQUEI A TABELA DO INSS ATUALIZADA DE 2022*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 20

int main(){
    int i;
    float salariof,vetor[TAM];
    for ( i = 0; i < TAM; i++){
        printf("escreva o salario:\n");
        scanf("%f",&vetor[i]);
        if (vetor[i]<=1212){
            printf("desconto INSS:%.3f\n",salariof=vetor[i]*7.5/100);
            printf("salario final:%.3f\n",salariof=vetor[i]-vetor[i]*7.5/100);
        }else if (vetor[i]>=1212.01 && vetor[i]<=2427.35){
            printf("desconto INSS:%.3f\n",salariof=vetor[i]*9/100);
            printf("salario final:%.3f\n",salariof=vetor[i]-vetor[i]*9/100);
        }else if (vetor[i]>=2427.36 && vetor[i]<=3641.03){
            printf("desconto INSS:%.3f\n",salariof=vetor[i]*12/100);
            printf("salario final:%.3f\n",salariof=vetor[i]-vetor[i]*12/100);
        }else if (vetor[i]>=3641.04 && vetor[i]<=7087.22){
            printf("desconto INSS:%.3f\n",salariof=vetor[i]*14/100);
            printf("salario final:%.3f\n",salariof=vetor[i]-vetor[i]*14/100);
        }
       
    }
    system("PAUSE");
    return 0;
}