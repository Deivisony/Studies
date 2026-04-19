#include <stdio.h>
#define MAX_STR 250

int main(void)
{
    char str[MAX_STR];

    str[0] = 'A';
    str[1] = 'B';
    str[2] = 'C';
    printf("%c", str[0]);
    printf("%c", str[1]);
    printf("%c\n", str[2]);


    printf("Digite uma frase\n");
    scanf(" %[^\n]s", str);
    printf("Você digitou: \"%s\"\n", str);

    int i;
    for (i = 0; str[i] != '\0'; i++)
    {

    }
    printf("E essa string tem %i caracteres\n", i);

    /* for( i = 0;str[i] != '\0'; i++) Para ensurar a letra 'a'
    {
        if (str[i] == 'a')
        {
            str[i] = '*';
        }
    }*/

    printf("Abaixo segue a string %s em maiuscula:\n", str);


    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("%s\n", str);


}
