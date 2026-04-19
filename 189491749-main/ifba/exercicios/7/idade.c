#include <stdio.h>

int main(void)
{
    printf("Digite a idade em dias\n");
    int idadeDias;
    scanf("%d", &idadeDias);

    int anos = idadeDias / 365;
    int resto = 0;
    if (idadeDias % 365 != 0)
    {
        resto = idadeDias % 365;
    }
    int meses = resto / 30;
    int dias = 0;
    if (resto % 30 != 0)
    {
        dias = resto % 30;
    }
    printf("A sua idade convertida é igual a %i anos, %i meses e %i dias\n", anos, meses, dias);
}
