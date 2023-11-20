#include <stdio.h>

int main(void){
    float x, y, resultado = 0;
    int op;

 
    do
    {
        printf("\n\nEscolha uma das operacoes abaixo:\n\n1 - SOMA \n2 - SUBTRRACAO \n3 - MULTIPLICACAO\n4 - DIVISAO\n");
        scanf("%i", &op);
        printf("\nEscolha o primeiro numero: ");
        scanf("%f", &x);
        printf("\nEscolha o segundo numero: ");
        scanf("%f", &y);
        switch (op)
        {
        case 1:
            resultado = x + y;
            break;
        case 2:
            resultado = x - y;
            break;
        case 3:
            resultado = x * y;
            break;
        case 4:
            resultado = x / y;
            break;
        default:
            printf("\nDigite uma opcao válida");
            break;
        }
        printf("\nO resultado da operacao e: %0.2f", resultado);
        printf("\nDigite 1 para continuar: ");
        scanf("%i", &op);        
    } while (op == 1);
    
}
