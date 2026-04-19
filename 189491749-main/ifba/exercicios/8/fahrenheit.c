#include <stdio.h>

int main(void)
{
    printf("Digite a temperatura em fahrenheit ");
    float fahrenheit = 0;
    scanf("%f", &fahrenheit);
    float celsius = 5.0 / 9.0 * (fahrenheit - 32);
    printf("%.2f Fº equivale a %.2f Cº\n", fahrenheit, celsius);

}
