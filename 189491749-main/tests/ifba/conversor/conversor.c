#include <stdio.h>

int main(void)
{
    printf("Insira um numero em dec\n");
    long val1;
    scanf("%li", &val1);
     printf("o num é %li\n", val1);
    //33 66 00
    //0011 0011 0110 0110 0000 0000
    while (val1 > 0)
    {
        printf("%li", (val1 % 2));
        val1 /= 2;
    }
    printf("\nAcabou\n");
}


/*if (val1 % 2 == 1)
{
    printf("%li", val1 % 2);
}
else
{
    printf("%i", resto);
}*/
