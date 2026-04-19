#include <stdio.h>

int main()
{
    int aux;
    int a[10] = {7, 2, 4, 5, 1, 9, 3, 10, 12, 11};


    for (int i = 0; i < 10; i++)
    {
        printf("Antes: %i\n", a[i]);
        for (int j = 0; j < 10 - 1; j++)
        {
            if (a[j] > a[j+1])
            {
                aux = a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
            }

        }
        printf("Depois :%i\n", a[i]);
    }
    for (int b = 0; b < 10; b++)
    {
        printf("%i ", a[b]);
    }


    return 0;
}
