#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main(){
    setlocale(LC_ALL,"");

    char letter;
    int c = 0;
    int cc = 1;

    printf("Descubra o valor de uma letra, na tabela ASCII.\n");

    while(c < cc){
        printf("Escolha uma letra:");
        scanf("%c", &letter);

        printf("O valor de '%c' na tabela ASCII é: %d\n", letter, letter);
        system("pause");

        c++;
        cc++;
    }
}
