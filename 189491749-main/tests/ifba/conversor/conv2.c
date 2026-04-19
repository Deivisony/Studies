#include <stdio.h>

void print_bin(long n)
{
    if (n == 0)
        return;

    print_bin(n / 2);
    printf("%ld", n % 2);
}

int main(void)
{
    printf("Insira um número em decimal:\n");
    long val1;
    scanf("%li", &val1);

    printf("O número é %li\n", val1);

    printf("O número em binário é: ");

    if (val1 == 0)
        printf("0");
    else
        print_bin(val1);

    printf("\nAcabou\n");

    return 0;
}
