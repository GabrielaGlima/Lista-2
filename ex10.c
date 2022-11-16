/*10. No dia da estreia do filme “Forrest Gump”, uma grande emissora de TV realizou
uma pesquisa logo após o encerramento do filme. Cada espectador respondeu a
um questionário no qual constava sua idade e sua opinião em relação ao filme:
excelente – 3; bom – 2; regular – 1. Crie um algoritmo que receba a idade a
opinião de N espectadores, calcule e exiba:
a. A quantidade de pessoas em cada opinião;
b. A média da idade das pessoas em cada opinião;
c. A porcentagem de resposta para cada opinião.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, idade, opiniao, qtexce=0, qtbom=0, qtreg=0;
    float numexp, medexc=0, medbom=0, medreg=0, percex=0, percbom=0, percreg=0;

    printf("Quantidade de expectadores:\n");
    scanf("%f",&numexp);

    for (i=1;i<=numexp;i++){
        printf ("Idade e opiniao:\n");
        scanf ("%d%d", &idade,&opiniao);
    
    if(opiniao == 1){
        qtexce += 1;
        medexc += idade;
    }
    else if(opiniao == 2){
        qtbom += 1;
        medbom += idade;
    }
    else if(opiniao == 3){
        qtreg += 1;
        medreg += idade;
    }
  }
    printf ("Quantidade de pessoas opiniao excelente:%d\n",qtexce);
    printf ("Quantidade de pessoas opiniao bom:%d\n",qtbom);
    printf ("Quantidade de pessoas opiniao regular:%d\n",qtreg);

    printf ("Media idade excelente:%.1f\n",medexc/qtexce);
    printf ("Media idade bom:%.1f\n",medbom/qtbom);
    printf ("Media idade regular:%.1f\n",medreg/qtreg);
    
    printf ("Porcentagem opiniao excelente:%.2f\n",percex = (qtexce/numexp)*100);
    printf ("Porcentagem opiniao bom:%.2f\n",percbom = qtbom/numexp*100);
    printf ("Porcentagem opiniao regular:%.2f\n",percreg = qtreg/numexp*100);
    
    system("PAUSE");
    return 0;
    
}