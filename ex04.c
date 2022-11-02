/*4. Desenvolva um algoritmo que preenche um vetor e depois copia os dados de um
vetor para outro vetor de forma inversa. O tamanho do vetor deve ser definido
pelo usuário.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamvert=0;
    printf("digite a quantidade de elementos do vetor:\n");
    scanf("%d",&tamvert);
    
    int i,vetor[tamvert],copia[tamvert];
    
            printf("-------Vetor-------\n");
    for ( i = 0; i < tamvert; i++){
        vetor[i]= tamvert - i;
        printf("%d\n",vetor[i]);
      
    }
        printf("-------Vetor copia invertido-------\n");
     for ( i = tamvert-1; i >= 0; i--){
            copia[i]= tamvert - i;
            
            printf("%d\n",copia[i]);
        
     }
   
    system("PAUSE");
    return 0;
}