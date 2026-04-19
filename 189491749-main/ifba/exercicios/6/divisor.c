#include <stdio.h>

int main(void)
{
    printf("Digite o primeiro numero inteiro\n");
    int dividendo;
    scanf("%i", &dividendo);
    printf("Digite o segundo numero inteiro\n");
    int divisor;
    scanf("%i", &divisor);
    int quociente;
    quociente = dividendo / divisor;
    int resto;
    resto = dividendo % divisor;
    printf("O quociente é %i e o resto é %i \n", quociente, resto);
}
