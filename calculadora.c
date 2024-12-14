#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operador, continuar;

    printf("Esse programa eh uma calculadora\n");

    do {
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);

        do {
            printf("Qual operacao voce deseja realizar? Digite o caracter desejado (+, -, * ou /): ");
            scanf(" %c", &operador);

            if (operador != '+' && operador != '-' && operador != '*' && operador != '/') {
                printf("Operador invalido, digite um operador valido (Ex: +, -, * ou /)\n");
            }
        } while (operador != '+' && operador != '-' && operador != '*' && operador != '/');

        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        switch (operador) {
            case '+':
                resultado = num1 + num2;
                break;
            case '-':
                resultado = num1 - num2;
                break;
            case '*':
                resultado = num1 * num2;
                break;
            case '/':
                while (num2 == 0) {
                    printf("Erro: nao pode dividir por zero. Digite um numero diferente de zero: ");
                    scanf("%f", &num2);
                }
                resultado = num1 / num2;
                break;
        }

        printf("O resultado de %.2f %c %.2f = %.2f\n", num1, operador, num2, resultado);

        do {
            printf("Deseja fazer outra operacao? Digite 'S' para Sim e 'N' para Nao: ");
            scanf(" %c", &continuar);

            if (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n') {
                printf("Entrada invalida. Digite apenas 'S' ou 'N'.\n");
            }
        } while (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n');

    } while (continuar == 'S' || continuar == 's'); 

    printf("Obrigado por usar a calculadora. Volte sempre.\n");

    return 0;
}
