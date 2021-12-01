#include <stdio.h>
#include <string.h>
#include <ctype.h>

 
int main()
{
    int i = 0, j = 0;
    char str[30];
    char chr;
 
    printf("escreva uma string de até 30 caracteres: \n");
    getchar();
    

    printf("Sua string em maiusculo fica:\n");
    while (str[i]) {
        chr = str[i];
        putchar(toupper(chr));
        i++;
    }

    printf("Sua string em minusculo fica:\n");

    while (str[j]) {
        chr= str[j];
        putchar(tolower(chr));
        j++;
    }

    return 0;
}