#include <stdio.h>
#define N 10

int main(void)
{
    int sequencia[N] = {0};
    int soma = 0;
    int retangulo = 0;
    printf("Digite a sequencia com um digito de cada vez\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%i", &sequencia[i]); // 2011008413
    }
    int valor;
    printf("Digite o valor K\n");
    scanf("%i", &valor); // 4
    for (int i = 0; i < N; i++)
    {
        soma += sequencia[i];
        if (soma > valor)
        {
            soma = sequencia[i];
        }
        if (soma == valor)
        {
            retangulo++;
        }
    }
    printf("Existem %i retangulos com somas iguais a K\n", retangulo); // 5

    /* Igorem o resto, eu tinha pensado em fazer criando varios vetores e
    clonando para verificar depois pensei numa forma mais facil
    
    int clone1[N] = {0};
    int clone2[N] = {0};

    clone1[i] = sequencia[i];
    clone2[i] = sequencia[i];

    for (int j = 0; j < N; j++)
        {
            // Se o clone1 for igual a clone2 CONTINUE if (clone[j])
        }  */
    return 0;
}
