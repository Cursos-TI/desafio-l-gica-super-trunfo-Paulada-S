#include <stdio.h>

int main(){
char codigo1[20];
char estado1[20];
char cidade1[20];
char codigo2[20];
char estado2[20];
char cidade2[20];
float area1, turisticos1, densidade1, per_capita1, area2, turisticos2, densidade2, per_capita2;
unsigned long int populacao1, PIB1, populacao2, PIB2;
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
scanf("%lu", &populacao1);
printf("Digite a área do estado\n");
scanf("%f", &area1);
printf("Digite o PIB do estado\n");
scanf("%lu", &PIB1);
printf("Digite o código do estado\n");
scanf("%f", &turisticos1);
printf("Digite o código do estado\n");
scanf("%s", &codigo2);
printf("Digite o nome do estado\n");
scanf("%s", &estado2);
printf("Digite o nome da cidade\n");
scanf("%s", &cidade2);
printf("Digite o número populacional\n");
scanf("%lu", &populacao2);
printf("Digite a área do estado\n");
scanf("%f", &area2);
printf("Digite o PIB do estado\n");
scanf("%lu", &PIB2);
printf("Digite o código do estado\n");
scanf("%f", &turisticos2);
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
}