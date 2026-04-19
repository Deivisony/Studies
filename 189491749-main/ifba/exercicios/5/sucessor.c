#include <stdio.h>

int main(void)
{
    printf("Digite um número inteiro que deseja visualizar o sucessor\n");
    int inteiro;
    scanf("%d", &inteiro);
    inteiro++;
    printf("O sucessor do número acima é %i\n", inteiro);
}
