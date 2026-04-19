#include <stdio.h>
#define LADOS 3

int main(void)
{
    printf("Digite o lado do triangulo\n");
    float lado[LADOS] = {};
    for (int i = 0; i < LADOS; i++)
    {
        scanf("%f", &lado[i]);
    }
    float perimetro = 0;
    perimetro = lado[0] * lado[1] * lado[2];
    printf("O perimetro do triangulo é %.2f\n", perimetro);
}
