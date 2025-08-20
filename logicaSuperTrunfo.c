#include <stdio.h>

int main() {

char estado1[25];
char codigo[50];
char cidade[50];
long int populacao;
float area;
float pib;
int turisticos;
float dp;
float pc;  
float superpoder;

printf("carta 1:\n");

printf("digite o estado:\n");
scanf("%s", estado1);

printf("digite o codigo da carta:\n");
scanf("%s", codigo);

printf("digite a cidade:\n");
scanf("%s", cidade);

printf("digite a populaçao:\n");
scanf("%s", &populacao);

printf("digite area:\n");
scanf("%f", &area);

printf("digite o pib\n");
scanf("%f", &pib);

printf("digite o numeros de pontos turisticos\n");
scanf("%d", &turisticos);

dp = populacao / area;
pc = (pib * 100000000.0) / populacao;
superpoder = populacao + area + pib + turisticos + pc + (1.0 / dp);

printf("carta 1:\n");
printf("cidade: %s\n", cidade);
printf("estado: %s\n", estado1);
printf("codigo da carta: %s\n ", codigo);
printf("populaçao: %s\n area: %f\n", populacao, area);
printf("pib: %f\n pontos turisticos: %d\n", pib, turisticos);
printf("dencidade populacional: %f\n", dp);
printf("pib per capita: %f\n", pc);
printf("super poder: %.2f\n", superpoder);



char estado2[25];
char codigo2[50];
char cidade2[50];
long int populacao2;
float area2;
float pib2;
int turisticos2;
float dp2;
float pc2; 
float superpoder2;

printf("carta 2:\n");

printf("digite o estado da carta2:\n");
scanf("%s", estado2);

printf("digite o codigo da carta da carta2:\n");
scanf("%s", codigo2);

printf("digite a cidade da carta2:\n");
scanf("%s", cidade2);

printf("digite a populaçao da carta2:\n");
scanf("%s", &populacao2);

printf("digite area da carta2:\n");
scanf("%f", &area2);

printf("digite o pib da carta2:\n");
scanf("%f", &pib2);

printf("digite o numeros de pontos turisticos da carta2:\n");
scanf("%d", &turisticos2);

dp2 = populacao2 / area2;
pc2 = (pib2 * 100000000.0) / populacao2;
superpoder2 = populacao2 + area2 + pib2 + turisticos2 + pc2 + (1.0 / dp2);



printf("carta 2:\n");
printf("cidade da cartaa2: %s\n", cidade2);
printf("estado da carta2: %s\n", estado2);
printf("codigo da carta2: %s\n ", codigo2);
printf("populaçao da carta2: %s\n area carta2: %f\n", populacao2, area2);
printf("pib da carta2: %f\n pontos turisticos da carta2: %d\n", pib2, turisticos2);
printf("dencidade populacional carta2: %f\n", dp2);
printf("pib per capita carta2: %f\n", pc2);
printf("super poder: %.2f\n", superpoder2);

printf("comparaçao das cartas:\n");
printf("populaçao: %d\n", populacao > populacao2);
printf("area: %d\n", area > area2);
printf("pib: %d\n", pib > pib2);
printf("pontos turisticoos: %d\n", turisticos > turisticos2);
printf("densidade populacional: %d\n", dp < dp2);
printf("pib oper capita: %d\n", pc > pc2);
printf("super poder: %d\n", superpoder > superpoder2);

if (populacao > populacao2) {
    printf("carta1 ganhou\n");
  } else {
    printf("carta2 ganhou\n");
  }

if (area > area2 ) {
    printf("carta1 ganhou\n");
  } else {
    printf("carta2 ganhou\n");
  }

if (pib > pib2) {
    printf("carta1 ganhou\n");
  } else {
    printf("carta2 ganhou\n");
  }

  if (turisticos > turisticos2) {
    printf("carta1 ganhou\n");
  } else {
    printf("carta2 ganhou\n");
  }

  if (dp < dp2) {
    printf("carta1 ganhou\n");
  } else {
    printf("carta2 ganhou\n");
  }

  if (pc > pc2) {
    printf("carta1 ganhou\n");
  } else {
    printf("carta2 ganhou\n");
  }

  if (superpoder > superpoder2) {
    printf("carta1 ganhou\n");
  } else {
    printf("carta2 ganhou\n");
  }


















return 0;
}