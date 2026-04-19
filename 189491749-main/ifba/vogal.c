#include <stdio.h>
#define MAX 250

int main(void)
{
    char frase [MAX];
    char frase2 [MAX];
    scanf("%s", frase);
    printf("%s\n", frase);
    for (int i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] == ('a' || 'e' || 'i' || 'o' || 'u'))
        {
            i++;
        }
        else
        frase2[i] = frase[i];
    }
}

#include <stdio.h>
#define MAX 250

int main(void)
{
    char frase [MAX];
    char frase2 [MAX];
    int alfabeto [26];
    scanf("%s", frase);
    printf("%s\n", frase);
    for (int i = 0; frase[i] != '\0'; i++)
    {
        for (int j = 0; alfabeto[j]; j++)
        {
            if (alfabeto[j] == -1)
            {
                alfabeto[j] = 0;
            }
            else if (alfabeto[j] != -1)
            {
                alfabeto[j]++;
            }
        }

        /*if (frase[i] != 'a' || frase[i] != 'e' || frase[i] != 'i' || frase[i] != 'o' || frase[i] != 'u')
        {
            frase2[i] = frase[i];
        }*/

    }
    for (int i = 0; alfabeto[i] < 26; i++)
    {
        printf("A letra na posição %i apareceu %i vezes\n", i, alfabeto[i]);
    }

}

#include <stdio.h>
#define MAX 250

int main(void)
{
    char frase [MAX];
    char frase2 [MAX];
    scanf("%s", frase);
    printf("%s\n", frase);
    for (int i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] != 'a' || frase[i] != 'e' || frase[i] != 'i' || frase[i] != 'o' || frase[i] != 'u')
        {
            frase2[i] = frase[i];
        }

    
    printf("%s\n", frase2);
}

