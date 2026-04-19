#include <stdio.h>

int main(void)
{
    printf("Digite a sequência de valores para as posições da barra\n");
    const int N = 14; //Máximo de posíções, facilmente recompilavel
    int vetor[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("Digite a entrada de valores para movimentar o cursor da barra\n");
     int entrada[N];
    for (int i = 0; i > -1; i++)
    {
        scanf("%d", &entrada[i]);
        if (entrada[i] == 0)
        {
            break;
        }
    }
    printf("O vetor é: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    printf("E as entradas são: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", entrada[i]);
    }

}
