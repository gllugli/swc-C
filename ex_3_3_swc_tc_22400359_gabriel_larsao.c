#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int codigo;

    printf("\n100. Detergente\n101. Esponja\n102. Lã de Aço\n\nDigite o código do produto que você deseja calcular: ");
    scanf("%d", &codigo);

    switch(codigo) {
        case 100:
            printf("\n100. Detergente \nValor: R$1,59");
            break;
        case 101:
            printf("\n101. Esponja \nValor: R$4,59");
            break;
        case 102:
            printf("\n102. Lã de Aço \nValor: R$1,79");
            break;
        default: 
            printf("\nEste produto não exite.");
    }   

    return 0;
}