#include <stdio.h>

int main(void)
{
    int inteiro = 0;
    do
    {
        scanf("%d", &inteiro);
    }
    while (inteiro >= 32);
    int resto[8] = {};
    for (int i = 0; i < 8; i++)
    {
        resto[i] = inteiro % 2;
        inteiro /= 2;
    }
    for (int i = 7; i >= 0; i--)
    {
        printf("%i ", resto[i]);
    }




}
