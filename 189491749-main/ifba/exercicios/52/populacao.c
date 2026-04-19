#include <stdio.h>

int main(void)
{
    int popA = 5000000;
    int popB = 7000000;
    float taxaNatalA = 3;
    float taxaNatalB = 2;

    float somaA = taxaNatalA / 100 * popA;
    float somaB = taxaNatalB / 100 * popB;

    int ano = 0;
    for (int i = 0; popA < popB; i++)
    {
        popA += 3 / 100 * popA;
        popB += 2 / 100 * popB;
        ano++;
    }
    printf("É necessário %i anos\n", ano);


}
