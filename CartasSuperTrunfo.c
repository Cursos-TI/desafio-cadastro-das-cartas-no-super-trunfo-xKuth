#include <stdio.h>

int main(){
    // Variaveis Inicializadas:
    char estado[2], cod_carta[2], estado2[2], cod_carta2[2], cidade[20], cidade2[20];
    int populacao, pontos_turi, populacao2, pontos_turi2;
    float area, pib, area2, pib2;

    // Inicio primeira carta
    printf("Digite um estado para carta use apenas[A a H] maiuscula: ");
    scanf("%s", &estado);
    printf("Digite um codigo para a carta de [0 a 4]: ");
    scanf("%s", &cod_carta);
    printf("Digite um nome para a cidade [não pode conter espaços use _ nos espaços]: ");
    scanf("%s", &cidade);
    printf("Digite o numero de habitantes da sua cidade [apenas inteiros ex:1 a 999]: ");
    scanf("%d", &populacao);
    printf("Digite o tamanho do territorio em km² [use '.' em vez de ','] ");
    scanf("%f", &area);
    printf("Digite o PIB (produto interno bruto) da sua cidade [user '.' em vez de ',']: ");
    scanf("%f", &pib);
    printf("Digite quantos pontos turisticos sua cidade ira ter [apenas inteiros ex:1 a 999] ");
    scanf("%d" , &pontos_turi);
    //Fim primeira carta:

    //Inicio segunda carta:
    printf("-----------------------------------------\n");
    printf("Agora vamos para sua segunda carta!:\n");
    printf("Digite um estado para carta use apenas[A a H] maiuscula: ");
    scanf("%s", &estado2);
    printf("Digite um codigo para a carta de [0 a 4]: ");
    scanf("%s", &cod_carta2);
    printf("Digite um nome para a cidade [não pode conter espaços use _ nos espaços]: ");
    scanf("%s", &cidade2);
    printf("Digite o numero de habitantes da sua cidade [apenas inteiros ex:1 a 999]: ");
    scanf("%d", &populacao2);
    printf("Digite o tamanho do territorio em km² [use '.' em vez de ','] ");
    scanf("%f", &area2);
    printf("Digite o PIB (produto interno bruto) da sua cidade [user '.' em vez de ',']: ");
    scanf("%f", &pib2);
    printf("Digite quantos pontos turisticos sua cidade ira ter [apenas inteiros ex:1 a 999] ");
    scanf("%d" , &pontos_turi2);
    //Fim segunda carta
    // Declaração das cartas preenchidas!
    printf("-----------------------------------------\n");
    printf("Suas cartas foram : ↓\n");
    printf("Carta 1: \n Estado: %s\n Codigo: %s0%s \n Nome da cidade: %s\n população: %d\n Area: %.2f\n PIB: %.2f\n Numero de pontos turísticos %d",
        estado, estado, cod_carta, cidade, populacao, area, pib, pontos_turi);
    printf("-----------------------------------------\n");
    printf("Carta 2: \n Estado: %s\n Codigo: %s0%s \n Nome da cidade: %s\n população: %d\n Area: %.2f\n PIB: %.2f\n Numero de pontos turísticos %d\n",
            estado2, estado2, cod_carta2, cidade2, populacao2, area2, pib2, pontos_turi2);
    return 0;
};
