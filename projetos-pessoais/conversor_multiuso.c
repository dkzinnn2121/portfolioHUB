#include <stdio.h>

void limpar_tela() {
    printf("\n------------------------------------\n");
}

void converter_temperatura() {
    int opcao;
    float temp, resultado;

    printf("\n--- CONVERSOR DE TEMPERATURA ---\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    printf("3. Celsius para Kelvin\n");
    printf("4. Kelvin para Celsius\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite o valor da temperatura: ");
    scanf("%f", &temp);

    switch(opcao) {
        case 1:
            resultado = (temp * 9/5) + 32;
            printf("%.2f C = %.2f F\n", temp, resultado);
            break;
        case 2:
            resultado = (temp - 32) * 5/9;
            printf("%.2f F = %.2f C\n", temp, resultado);
            break;
        case 3:
            resultado = temp + 273.15;
            printf("%.2f C = %.2f K\n", temp, resultado);
            break;
        case 4:
            resultado = temp - 273.15;
            printf("%.2f K = %.2f C\n", temp, resultado);
            break;
        default:
            printf("Opcao invalida!\n");
    }
}

void converter_comprimento() {
    int opcao;
    float medida, resultado;

    printf("\n--- CONVERSOR DE COMPRIMENTO ---\n");
    printf("1. Metros para Quilometros\n");
    printf("2. Quilometros para Metros\n");
    printf("3. Metros para Centimetros\n");
    printf("4. Centimetros para Metros\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite o valor da medida: ");
    scanf("%f", &medida);

    switch(opcao) {
        case 1:
            resultado = medida / 1000;
            printf("%.2f m = %.4f km\n", medida, resultado);
            break;
        case 2:
            resultado = medida * 1000;
            printf("%.2f km = %.2f m\n", medida, resultado);
            break;
        case 3:
            resultado = medida * 100;
            printf("%.2f m = %.2f cm\n", medida, resultado);
            break;
        case 4:
            resultado = medida / 100;
            printf("%.2f cm = %.2f m\n", medida, resultado);
            break;
        default:
            printf("Opcao invalida!\n");
    }
}

int main() {
    int menu;

    do {
        limpar_tela();
        printf("      CONVERSOR MULTIUSO V1.0      \n");
        printf("         Portfolio Tecnico         \n");
        printf("1. Conversao de Temperatura\n");
        printf("2. Conversao de Comprimento\n");
        printf("0. Sair\n");
        printf("Escolha uma categoria: ");
        scanf("%d", &menu);

        if(menu == 1) {
            converter_temperatura();
        } else if(menu == 2) {
            converter_comprimento();
        } else if(menu != 0) {
            printf("Opcao invalida!\n");
        }

    } while(menu != 0);

    printf("\nPrograma encerrado. Ate logo!\n");
    return 0;
}
