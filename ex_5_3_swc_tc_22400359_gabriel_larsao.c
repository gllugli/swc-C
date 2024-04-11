/*
Questão 5 - Faça um programa que calcule o “peso ideal” de um usuário de acordo com
um caractere identificador de sexo (“M” para Masculino ou “F” para Feminino) inserido pelo
mesmo. 

A fórmula para cada um dos dois casos está definida abaixo.

Caso “M”, utilize a fórmula: PesoIdeal = 52 + (0.75 × (altura - 152.4)
Caso “F”, utilize a fórmula: PesoIdeal = 52 + (0.67 × (altura - 152.4)

*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int altura;
    float peso_ideal;
    char x;

    printf("\nQual seu sexo? \n\nDigite M para Masculino e F para Feminino: ");
    x = getchar();

    printf("\nQual sua altura? (Ex.: 170) ");
    scanf("%d", &altura);

    switch(x) {
        case 'M':
            peso_ideal = 52 + (0.75 * (altura - 152.4));
            printf("\nSeu peso ideal é: %.2f", peso_ideal);
            break;
        
        case 'F':
            peso_ideal = 52 + (0.75 * (altura - 152.4));
            printf("\nSeu peso ideal é: %.2f", peso_ideal);
            break; 

        default:
            printf("\nDigite um sexo válido.");
    }

    return 0;
}