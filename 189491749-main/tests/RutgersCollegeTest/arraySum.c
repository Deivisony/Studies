#include <stdio.h>

int main(void)
{
    int sum = 0;
    int array[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("%i ", array[i]);
        sum += array[i];
    }
    printf("%i\n", sum);
}
