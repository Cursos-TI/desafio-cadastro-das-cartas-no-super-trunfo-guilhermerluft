#include <stdio.h>
#include <stdbool.h>


int main() {
    //Atributos da carta A
    char nomeCartaA[50];
    float populacaoCartaA;
    float areaCartaA;
    float pibCartaA;
    int qtdPontosTuristicosCartaA;

    //Atributos da carta B
    char nomeCartaB[50];
    float populacaoCartaB;
    float areaCartaB;
    float pibCartaB;
    int qtdPontosTuristicosCartaB;

    while(true) {
        printf("\n=+=+=+ CADASTRO DA CARTA A +=+=+=\n");

        printf("Digite o nome do país: ");
        scanf("%s", &nomeCartaA);

        printf("Digite a população de %s:", nomeCartaA);
        scanf("%f", &populacaoCartaA);

        printf("Digite a área de %s:", nomeCartaA);
        scanf("%f", &areaCartaA);

        printf("Digite o pib de %s:", nomeCartaA);
        scanf("%f", &pibCartaA);

        printf("Digite a quantidade de pontos turísticos  de %s:", nomeCartaA);
        scanf("%d", &qtdPontosTuristicosCartaA);

        printf("\n=+=+=+ CADASTRO DA CARTA B +=+=+=\n");

        printf("Digite o nome do país: ");
        scanf("%s", &nomeCartaB);

        printf("Digite a população de %s:", nomeCartaB);
        scanf("%f", &populacaoCartaB);

        printf("Digite a área de %s:", nomeCartaB);
        scanf("%f", &areaCartaB);

        printf("Digite o PIB de %s:", nomeCartaB);
        scanf("%f", &pibCartaB);

        printf("Digite a quantidade de pontos turísticos de %s:", nomeCartaB);
        scanf("%d", &qtdPontosTuristicosCartaB);

        if(populacaoCartaA < populacaoCartaB) {
            printf("\nVencedor para população: %s", nomeCartaA);
        } else {
            printf("\nVencedor para população: %s", nomeCartaB);
        }        

        if(areaCartaA > areaCartaB) {
            printf("\nVencedor para área: %s", nomeCartaA);
        } else {
            printf("\nVencedor para área: %s", nomeCartaB);
        }

        if(pibCartaA > pibCartaB) {
            printf("\nVencedor para PIB: %s", nomeCartaA);
        } else {
            printf("\nVencedor para PIB: %s", nomeCartaB);
        }

        if(qtdPontosTuristicosCartaA > qtdPontosTuristicosCartaB) {
            printf("\nVencedor para quantidade de pontos turísticos: %s", nomeCartaA);
        } else {
            printf("\nVencedor para quantidade de pontos turístico: %s", nomeCartaB);
        }

        printf("\n\nDeseja fazer outra comparação?");
        printf("\n[1] Sim");
        printf("\n[2] Não\n");
        int resultado = scanf("%d", &resultado);
        
        if(resultado != 1) {
            break;
        } else {
            printf("Encerrando aplicação...");
        }
    }

    return 0;
}
