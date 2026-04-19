#include <stdio.h>

int main(void)
{
    printf("Digite a sequência de números\n");
    const int N = 3;
    //scanf("%d", &N);
    //printf("O valor digitado foi %d\n", N);
    int seq[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &seq[i]);
    }

    printf("Junto: %d\n", (seq[0] * 10 + seq[1]) * 10 + seq[2]);

    int senha[] = {8, 15, 4, 23, 16, 42};

      for (int i = 0; i < 6; i++)
    {
        printf("%d ", senha[i]);
    }

    printf("\n");

    int temp1 = senha[1];
    senha[1] = senha[4];
    int temp2 = senha[2];
    senha[2] = temp1;
    senha[4] = temp2;

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", senha[i]);
    }

}
