#include <stdio.h>

int main(void)
{
    float valorMercadoria;
    int valorEntrada;
    int prestação;
    scanf("%d", &prestação);
    valorEntrada = valorMercadoria / 3;
    if (valorMercadoria % 3 != 0)
    {
        valorEntrada += valorMercadoria % 3;
    }
    prestação = valorMercadoria / 3;


}
