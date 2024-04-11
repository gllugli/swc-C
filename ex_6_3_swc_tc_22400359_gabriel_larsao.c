#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    char alimento;

    printf("\n1. Alimento Não-Perecível \n2. Alimento Perecível \n3. Vestuário \n4. Limpeza \n\nDigite o código do seu produto: ");
    alimento = getchar();

    switch(alimento) {
        case '1':
            printf("\nSeu produto é um Alimento Não-Perecível. Ele fica no corredor 1.");
            break;

        case '2':
            printf("\nSeu produto é um Alimento Perecível. Ele fica no corredor 2.");
            break;

        case '3':
            printf("\nSeu produto é um item do Vestuário. Ele fica no corredor 3.");
            break;
            
        case '4':
            printf("\nSeu produto é um item de Limpeza. Ele fica no corredor 4.");
            break;
        
        default: 
            printf("\nEsta classificação não existe.");
    }
}