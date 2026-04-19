#include <stdio.h>

int main(void)
{
    int numero;
    printf("Digite o número para ser invertido: ");
    scanf("%d", &numero);
    int invertido;
    int centena;
    int dezena;
    int unidade;
    centena = numero / 100;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;
    invertido = unidade * 100 + dezena * 10 + centena;
    printf("A inversão desse número é %03d\n", invertido);
}
