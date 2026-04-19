#include <stdio.h>

int main(void)
{
    printf("Iniciando...\n");
    int dado1;
    int dado2;
    int numero;
    int naoAchou = 1;
    scanf("%i", &numero);
    for (dado1 = 1; dado1 <= 6; dado1++)
    {
        for (dado2 = 1; dado2 <= 6; dado2++)
        {
            if(dado1 + dado2 == numero)
            {
                printf("%i + %i = %i\n", dado1, dado2, numero);
                naoAchou = 0;
            }
        }
    }
    if (naoAchou)
    printf("Nenhuma é valida para %i\n", numero);
}
