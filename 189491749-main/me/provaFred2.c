#include <stdio.h>

int main(void)
{
    int sorteio[11];
    int pontos = 0;
    int igual = 0;
    for (int i = 0; i < 11; i++)
    {
        scanf("%i", &sorteio[i]);
    }
    for (int i = 0; i < 11; i++)
    {
        if (i == 10)
        break;
        if (sorteio[i] == sorteio[i+1])
        {
            igual++;
        }
        else
        {
            if (pontos < igual)
            {
                pontos = igual;
                igual = 0;
            }
            else
            {
                igual = 0;
            }
        }
    }
    pontos++;
    printf("A pontuação eh %i\n", pontos);
}
