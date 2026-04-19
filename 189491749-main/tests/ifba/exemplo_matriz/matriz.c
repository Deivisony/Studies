#include <stdio.h>

int main(void)
{
    const int N = 3;
    printf("Vetor de %d espaços\n", N);
    int matriz[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &matriz[i][j]);
        }

    }
    printf("\n\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d\n", matriz[i][j]);
        }
    }

}
