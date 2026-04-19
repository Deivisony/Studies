#include <stdio.h>

int main(void)
{
    printf("Digite em cada linha a base e em seguida a altura do retângulo\n");
    float base;
    float altura;
    scanf("%f", &base);
    scanf("%f", &altura);
    float area;
    area = base * altura;
    printf("A área do retângulo é %.2f\n", area);
    float perimetro = 2 * (base + altura);
    printf("O Perimetro do retângulo é %.2f\n", perimetro);
}
