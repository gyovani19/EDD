#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    // Declara a string
    char str[100];
    // Lê a string
    printf("Digite uma string: ");
    scanf("%s", str);

    // Inicializa o contador
    int cont = 0;
    // Inicializa o índice
    int i = 0;
    // Percorre a string
    while (str[i] != '\0')
    {
        // Se o caractere for 'a' ou 'A', incrementa o contador
        if (tolower((unsigned char)str[i]) == 'a')
        {
            cont++;
        }
        i++;
    }

    // Imprime o resultado
    printf("A string tem %i 'a'\n", cont);
    return 0;
}