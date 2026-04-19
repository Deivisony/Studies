#include <stdio.h>
#include <string.h>

#define HEIGHT 4
#define WIDTH 4
#define RED 0
#define GREEN 1
#define BLUE 2
#define CHANNELS 3
int main(void)
{
    printf("INSIRA IMG\n");
    int RGB[HEIGHT][WIDTH][CHANNELS] = {0};
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
           scanf(" %d %d %d", &RGB[i][j][RED], &RGB[i][j][GREEN], &RGB[i][j][BLUE]);
        }
    }
    printf("Calculando\n");
    float cinza[HEIGHT][WIDTH] = {0};
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            cinza[i][j] += RGB[i][j][RED] * 0.299;
            cinza[i][j] += RGB[i][j][GREEN] * 0.587;
            cinza[i][j] += RGB[i][j][BLUE] * 0.114;
        }

    }
    printf("%f\n", cinza[0][0]);
    printf("%f\n", cinza[1][0]);
}
