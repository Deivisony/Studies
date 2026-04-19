#include <stdio.h>
#include <strings.h>
#define MAX 256

int main(void)
{
    char p1[MAX];
    char p2[MAX];
    int curinga = 1;
    int asterisco = 0;

    fgets(p1, MAX, stdin);
    fgets(p2, MAX, stdin);
    for (int i = 0; i != '\n'; i++)
    {
        for (int j = 0; j != '\n'; j++)
        {
            if (p2[i] != p1[j] && p2[i] != '*')
            {
                curinga = 0;
            }
            if (p2[i] == '*')
            {
                asterisco++;
            }
        }
    }
    if (curinga > 0 && asterisco > 0)
    {
        printf("É curinga.\n");
    }
    else
    printf("Não é anagrama curinga.\n");
}
