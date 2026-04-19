#include <stdio.h>

int main(void)
{
    int k;
    scanf("%i", &k);
    int quadraMinX = 0 - k;
    int quadraMaxX = k;
    int quadraMinY = 0;
    int quadraMaxY = k;
    int bola1x, bola1y, bola2x, bola2y;
    scanf("%i %i %i %i", &bola1x, &bola1y, &bola2x, &bola2y);
    if (((bola1x >= quadraMinX && bola1x <= quadraMaxX) && (bola1y >= quadraMinY && bola1y <= quadraMaxY)) && (bola2x >= quadraMinX && bola2x <= quadraMaxX) && (bola2y >= quadraMinY && bola2y <= quadraMaxY))
    {
        printf("A marcação está dentro da quadra.\n");
    }
    else
    printf("A marcação está fora da quadra.\n");
}
