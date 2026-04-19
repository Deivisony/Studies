//Escreva um programa em C, que gere a substring de uma string original, dado a posição inicial e a final da substring.
#include <stdio.h>
#include <strings.h>
#define MAX 15
int main(void)
{
    char original [MAX];
    char sub [MAX];
    int posInicial, posFinal;
    printf("Digite a string original\n");
    fgets(original, MAX, stdin);
    printf("Digite a posição inicial e a posição final, separadas por um espaço.\n");
    scanf("%i %i", &posInicial, &posFinal);
    int contador = 0;
    for (int i = posInicial; i < posFinal; i++)
    {
        sub[contador] = original[i];
        contador++;
    }

//100 latino

    //sub[posFinal] = '\0';
    printf("%s\n", sub);
}
