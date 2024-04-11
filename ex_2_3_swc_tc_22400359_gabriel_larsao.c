#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    char x;

    printf("\n1.Fazer Check-In \n2.Chamar Serviço de Quarto \n3.Fazer Pedido \n\nDigite qual serviço você deseja: ");
    x = getchar();

    switch(x) {
        case '1': 
            printf("\nIremos te redirecionar para a página de Check-In.");
            break;

        case '2':
            printf("\nUm funcionário chegará em seu quarto o quanto antes.");
            break;

        case '3':
            printf("\nIremos te redirecionar para a página de pedidos.");
            break;
        
        default: 
            printf("\nEsta opção não existe.");
    }   
}