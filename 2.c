#include <stdio.h>

int main() {
    double renda_fixa_nacional, renda_fixa_internacional;
    double renda_variavel_nacional, renda_variavel_internacional;
    printf("Digite os valores de renda fixa nacional, renda fixa internacional, renda variável nacional e renda variável internacional: ");
    scanf("%lf %lf %lf %lf", &renda_fixa_nacional, &renda_fixa_internacional, &renda_variavel_nacional, &renda_variavel_internacional);

    double total_investido = renda_fixa_nacional + renda_fixa_internacional + renda_variavel_nacional + renda_variavel_internacional;
    double total_variavel = renda_variavel_nacional + renda_variavel_internacional;

    double percentual_variavel = (total_variavel / total_investido) * 100;

    char* perfil;
    if (percentual_variavel <= 10) {
        perfil = "Conservador";
    } else if (percentual_variavel <= 30) {
        perfil = "Arrojado";
    } else {
        perfil = "Agressivo";
    }

    printf("%s (%.2lf%%)\n", perfil, percentual_variavel);

    return 0;
}