#include <stdio.h>

int main(void)
{
    printf("Digite o Lado do Quadrado\n");
    float lado;
    scanf("%f", &lado);
    float area = lado * lado;
    float perimetro = 4 * lado;
    printf("A area desse quadrado é %.2f e o perimetro é %.2f\n", area, perimetro);
}
