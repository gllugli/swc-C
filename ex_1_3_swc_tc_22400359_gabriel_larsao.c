#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int dia;

    printf("Digite um número para consultar o dia da semana. \n\nConsidere Domingo como dia 1 e Sábado como dia 7: ");
    scanf("%d", &dia);

    switch(dia) {

        case 1: 
            printf("\nDomingo: Final de Semana.");
            break;

        case 2: 
            printf("\nSegunda-feira: Dia Útil.");
            break;

        case 3:
            printf("\nTerça-feira: Dia Útil.");
            break;

        case 4:
            printf("\nQuarta-feira: Dia Útil.");
            break;

        case 5:
            printf("\nQuinta-feira: Dia Útil.");
            break;

        case 6:
            printf("\nSexta-feira: Dia Útil.");
            break;

        case 7:
            printf("\nSábado: Final de Semana.");
            break;

        default: 
            printf("\nA semana só tem 7 dias.");
    }

    return 0;
}