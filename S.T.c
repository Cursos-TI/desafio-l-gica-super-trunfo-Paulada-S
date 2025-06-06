#include <stdio.h>

int main(){
char codigo1[20];
char estado1[20];
char cidade1[20];
char codigo2[20];
char estado2[20];
char cidade2[20];
int Super_Especial1, Super_Especial2, resultado1, resultado2, populacao1, PIB1, populacao2, PIB2, area1, turisticos1, densidade1, per_capita1, area2, turisticos2, densidade2, per_capita2;
int  opcao1, opcao2;
densidade1 = (populacao1 / area1);
per_capita1 = (PIB1 / populacao1);
densidade2 = (populacao2 / area2);
per_capita2 = (PIB2 / populacao2);
Super_Especial1 = (area1 + populacao1 + PIB1 + turisticos1 + (area1 / populacao1));
Super_Especial2 = (area2 + populacao2 + PIB2 + turisticos2 + (area2 / populacao2));
/*
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

printf("Escolha um atributo.\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos turísticos\n");
printf("5. Densidade populacional\n");
printf("6. PIB per capita\n");
scanf("%d", &opcao1);

switch (opcao1)
{
case 1:
    printf("População\n");
    populacao1 > populacao2 ? 1 : 0;
    /*
    if(populacao1 > populacao2){
        resultado1 = 1;
  //  printf("Carta 1 venceu em população\n");
}else if(populacao1 < populacao2){
    resultado1 = 2;
        printf("Carta 2 venceu em população\n");
}else{
    resultado1 = 3;
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

printf("Escolha outro atributo.\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos turísticos\n");
printf("5. Densidade populacional\n");
printf("6. PIB per capita\n");
scanf("%d", &opcao2);
/*
if (opcao1 == opcao2)
{
    printf("Você escolheu a mesma opção\n");
}


switch (opcao2)
{
case 1:
    printf("População\n");
    populacao1 > populacao2 ? 1 : 0;
    /*
    if(populacao1 > populacao2){
        resultado2 = 1;
   // printf("Carta 1 venceu em população\n");
}else if(populacao1 < populacao2){
    resultado2 = 2;
        printf("Carta 2 venceu em população\n");
}else{
    resultado2 = 3;
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
printf("P. %d S. %d\n", resultado1, resultado2);
if (resultado1 && resultado2){
    printf("Você ganhou!\n");
}else if(resultado1 != resultado2){
    printf("Você empatou!\n");
}else{
    printf("Você perdeu!\n");
}

printf("Carta1 %s %s %s\n", codigo1, estado1, cidade1);
printf("Carta2 %s %s %s\n", codigo2, estado2, cidade2);
*/
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
printf("Escolha um atributo.\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos turísticos\n");
printf("5. Densidade populacional\n");
printf("6. PIB per capita\n");
scanf("%d", &opcao1);
switch (opcao1)
{
case 1:
    printf("População\n");
    resultado1 = populacao1 > populacao2 ? 1 : 0;
    break;
    case 2:
    printf("Área\n");
    resultado1 = area1 > area2 ? 1 : 0;
    break;
    case 3:
    printf("PIB\n");
    resultado1 = PIB1 > PIB2 ? 1 : 0;
    break;
    case 4:
    printf("Pontos turísticos\n");
    resultado1 = turisticos1 > turisticos2 ? 1 : 0;
    break;
    case 5:
    printf("Densidade populacional\n");
    resultado1 = densidade1 < densidade2 ? 1 : 0;
    break;
    case 6:
    printf("PIB per capita\n");
    resultado1 = per_capita1 > per_capita2 ? 1 : 0;
    break;
}
printf("Escolha um atributo.\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos turísticos\n");
printf("5. Densidade populacional\n");
printf("6. PIB per capita\n");
scanf("%d", &opcao2);
if (opcao1 == opcao2)
{
    printf("Você escolheu o mesmo atributo!\n");
}
switch (opcao2)
{
case 1:
    printf("População\n");
    resultado2 = populacao1 > populacao2 ? 1 : 0;
    break;
    case 2:
    printf("Área\n");
    resultado2 = area1 > area2 ? 1 : 0;
    break;
    case 3:
    printf("PIB\n");
    resultado2 = PIB1 > PIB2 ? 1 : 0;
    break;
    case 4:
    printf("Pontos turísticos\n");
    resultado2 = turisticos1 > turisticos2 ? 1 : 0;
    break;
    case 5:
    printf("Densidade populacional\n");
    resultado2 = densidade1 < densidade2 ? 1 : 0;
    break;
    case 6:
    printf("PIB per capita\n");
    resultado2 = per_capita1 > per_capita2? 1 : 0;
    break;
}
    printf("P. %d S. %d\n", resultado1, resultado2);
if (resultado2 && resultado2){
    printf("Você ganhou!\n");
}else if(resultado1 != resultado2){
    printf("Você empatou!\n");
}else{
    printf("Você perdeu!\n");
}
printf("Carta1 %s %s %s\n", codigo1, estado1, cidade1);
printf("Carta2 %s %s %s\n", codigo2, estado2, cidade2);
}