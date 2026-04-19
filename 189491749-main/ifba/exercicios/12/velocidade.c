#include <stdio.h>

int main(void)
{
    printf("Digite a velocidade em m/s: ");
    float velocidade;
    scanf("%f", &velocidade);
    velocidade *= 3.6;
    printf("A velocidade em km/h é %.0fkm/h\n", velocidade);
}
