/*Sabendo-se que a UAL calcula a divisão através de subtrações sucessivas, criar m
programa que calcule e imprima o resto da divisão de números inteiros lidos. suponha
que os números lidos sejam positivos e que o dividendo seja maior que o divisor.*/

#include <stdio.h>

int main(void)
{
    printf("Digite o dividendo: ");
    int dividendo;
    scanf("%d", &dividendo);
    printf("\nDigite o divisor: ");
    int divisor;
    scanf("%d", &divisor);
    int quociente = 0;
    int resto = dividendo;
    while (resto > 0)
    {
        resto -= divisor;
        quociente++;
    }

    int multiplicação = divisor * quociente; /* 4x3 */
    resto = dividendo - multiplicação;
    printf("quociente é: %i, o resto é: %i\n", quociente, resto);
}
