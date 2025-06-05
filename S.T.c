#include <stdio.h>

int main(){
char codigo1[20];
char estado1[20];
char cidade1[20];
char codigo2[20];
char estado2[20];
char cidade2[20];
int opcao1, opcao2, populacao1, PIB1, populacao2, PIB2, area1, turisticos1, densidade1, per_capita1, area2, turisticos2, densidade2, per_capita2;
densidade1 = populacao1 / area1;
per_capita1 = PIB1 / populacao1;
densidade2 = populacao2 / area2;
per_capita2 = PIB2 / populacao2;

printf("Digite o código do estado\n");
scanf("%s", &codigo1);

printf("Digite o nome do estado\n");
scanf("%s", &estado1);

printf("Digite o nome da cidade\n");
scanf("%s", &cidade1);

printf("Digite o número populacional\n");
scanf("%d", &populacao1);

printf("Digite a área do estado\n");
scanf("%d", &area1);

printf("Digite o PIB do estado\n");
scanf("%d", &PIB1);

printf("Digite o número de postos turísticos\n");
scanf("%d", &turisticos1);

printf("Digite o código do estado\n");
scanf("%s", &codigo2);

printf("Digite o nome do estado\n");
scanf("%s", &estado2);

printf("Digite o nome da cidade\n");
scanf("%s", &cidade2);

printf("Digite o número populacional\n");
scanf("%d", &populacao2);

printf("Digite a área do estado\n");
scanf("%d", &area2);

printf("Digite o PIB do estado\n");
scanf("%d", &PIB2);

printf("Digite o número de postos turísticos\n");
scanf("%d", &turisticos2);

printf("Digite o atributo escolhido\n");
scanf("%d", &opcao1);

switch (opcao1)
{
case 1:
    printf("População\n");
    if(populacao1 > populacao2){
    printf("Carta 1 venceu em população\n");
}else if(populacao1 < populacao2){
        printf("Carta 2 venceu em população\n");
}else{
    printf("Empate em população\n");
}
    break;
    case 2:
    printf("Área\n");
    if(area1 > area2){
    printf("Carta 1 venceu em área\n");
}else if(area1 < area2){
        printf("Carta 2 venceu em área\n");
}else{
      printf("Empate em área\n");
}
    break;
    case 3:
    printf("PIB\n");
    if(PIB1 > PIB2){
    printf("Carta 1 venceu em PIB\n");
}else if(PIB1 < PIB2){
        printf("Carta 2 venceu em PIB\n");
}else{
      printf("Empate em PIB\n");
}
    break;
    case 4:
    printf("Pontos turísticos\n");
    if(turisticos1 > turisticos2){
    printf("Carta 1 venceu em pontos turísticos\n");
}else if(turisticos1 < turisticos2) {
        printf("Carta 2 venceu em pontos turísticos\n");
}else{
    printf("Empate em pontos turísticos\n");
}
    break;
    case 5:
    printf("Densidade populacional\n");
    if(densidade1 < densidade2){
    printf("Carta 1 venceu em densidade populacional\n");
}else if(densidade1 > densidade2) {
        printf("Carta 2 venceu em densidade populacional\n");
}else{
    printf("Empate em densidade populacional\n");
}
    break;
    case 6:
    printf("PIB per capita\n");
    if(per_capita1 > per_capita2){
    printf("Carta 1 venceu em PIB per capita\n");
}else if(per_capita1 < per_capita2) {
        printf("Carta 2 venceu em PIB per capita\n");
}else{
    printf("Empate em PIB per capita\n");
}
    break;
default:
printf("Inválido\n");
    break;
}
printf("Carta1 %s %s %s\n", codigo1, estado1, cidade1);
printf("Carta2 %s %s %s\n", codigo2, estado2, cidade2);
/*
if(populacao1 > populacao2){
    printf("Carta 1 venceu em população\n");
}else{
        printf("Carta 2 venceu em população\n");
}
if(area1 > area2){
    printf("Carta 1 venceu em área\n");
}else{
        printf("Carta 2 venceu em área\n");
}
if(PIB1 > PIB2){
    printf("Carta 1 venceu em PIB\n");
}else{
        printf("Carta 2 venceu em PIB\n");
}
if(turisticos1 > turisticos2){
    printf("Carta 1 venceu em pontos turísticos\n");
}else{
        printf("Carta 2 venceu em pontos turísticos\n");
}
if(densidade1 < densidade2){
    printf("Carta 1 venceu em densidade populacional\n");
}else{
        printf("Carta 2 venceu em densidade populacional\n");
}
if(per_capita1 > per_capita2){
    printf("Carta 1 venceu em PIB per capita\n");
}else{
        printf("Carta 2 venceu em PIB per capita\n");
}
printf("Carta1 %s %s %s\n", codigo1, estado1, cidade1);
printf("Carta1 %s %s %s\n", codigo2, estado2, cidade2);
*/
}