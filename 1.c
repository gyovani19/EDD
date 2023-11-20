#include <stdio.h>
#include <string.h>
#include <ctype.h>

//FUNÇÃO QUE CONTA QUANTOS 'a' TEM NA STRING, usando tolower para não diferenciar maiúsculas de minúsculas
int conta_a(char *str){
    int count = 0;
    for (; *str != '\0'; str++){
      if (tolower((unsigned char)*str) == 'a'){
        count++;
      }
    }
    return count;
}
int main(void){
    //declara a string
    char str[100];
    //lê a string
    printf("Digite uma string: ");
    //fgets lê até o \n, então é necessário remover o \n
    fgets(str, sizeof(str), stdin);
    //substitui o \n por \0
    str[strcspn(str, "\n")] = '\0'; // remove a nova linha lida pelo fgets
    //imprime o resultado
    printf("A string tem %i 'a'", conta_a(str));
    //pula uma linha
    putchar('\n');
    return 0;
}