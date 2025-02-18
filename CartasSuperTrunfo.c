#include <stdio.h>

int main(){

  /* Estado de Brasilia = B */

    char inicial = 'B';
    char codigo [20] = "B01";
    char nome [20] = "Planaltina";
    int populacao = 164939;
    float area = 1534.69;
    float pip = 237.511;
    int Pontoturisco = 21;

    
  printf("Digite a primeira Carta\n");
  scanf("%s",&codigo);
  printf("Estado: %c\n", inicial);
  printf("Codigo da Carta: %s\n",codigo);
  printf("Nome da Cidade: %s\n", nome);
  printf("População: %d\n", populacao);
  printf ("Área em KM²: %f\n",area);
  printf("PIB: %f\n",pip);
  printf("Número de Pontos Turísticos: %d\n",Pontoturisco);



  printf("\n");


  /* Estado do Maranhão = M*/

    char inicial2 = 'M';
    char codigo2 [20] = "M02";
    char nome2 [20] = "Morros";
    int populacao2 = 18554;
    float area2 = 1712.121;
    float pip2 = 41220.798;
    int Pontoturisco2 = 11;

  printf("Digite a primeira Carta\n");
  scanf("%s",&codigo2);
  printf ("Estado : %c\n",inicial2);   
  printf("Código da Carta : %s\n",codigo2);
  printf ("Nome da Cidade : %s\n",nome2);
  printf("População : %d\n",populacao2);
  printf("Área em KM² : %f\n",area2);
  printf("PIB : %f\n",pip2);
  printf("Número de Pontos Turísticos : %d\n",Pontoturisco2);


  printf("\n");


 return 0;
    

}
