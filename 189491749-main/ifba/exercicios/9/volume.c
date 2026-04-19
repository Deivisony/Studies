#include <stdio.h>

int main(void)
{
    printf("Digite o raio e a altura ");
    float raio = 0;
    float altura = 0;
    scanf("%f %f", &raio, &altura);
    float volume = 3.14 * raio * raio * altura;
    printf(" O volume da lata é %.2f\n", volume);
}
