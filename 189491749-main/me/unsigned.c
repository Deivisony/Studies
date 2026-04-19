#include <stdio.h>

int main(void)
{
    printf("Ola mundos\n");
    int inteiro;
    char escolha;
    printf("Digite o inteiro: ");
    scanf("%i", &inteiro);
    printf("Voce digitou %i\n", inteiro);
    for (int i = 0; i > -1; i++)
    {
        inteiro = inteiro + inteiro;
        printf("O dobro inteiro é %i\n", inteiro);
        printf("Continua? S ou N? ");
        scanf(" %c", &escolha);
        if (escolha == 'N')
        {   
            break;
        }
    }
    unsigned int inteiroSemSinal;
    printf("Digite o inteiro sem sinal: \n");
    scanf("%u", &inteiroSemSinal);
    for (int i = 0; i > -1; i++)
    {
        inteiroSemSinal = inteiroSemSinal + inteiroSemSinal;
        printf("O dobro numero é %u\n", inteiroSemSinal);
        printf("Continua? S ou N? ");
        scanf(" %c", &escolha);
        if (escolha == 'N')
        {
            break;
        }
    }


}
