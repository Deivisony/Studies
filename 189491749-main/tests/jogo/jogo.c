#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Escolha o tamanho da senha do jogo\n");
    int slot;
    scanf("%i", &slot);
    const int SLOTS = slot;
    int senha[SLOTS] = {};
    //printf("Iniciando o jogo\n");
    //printf("Digite sua senha (um digito por vez)\n");
    fgets(senha);
    /*for (int i = 0; i < SLOTS; i++)
    {
        // A senha vai ser 259 por motivos de teste
        scanf("%d", &senha[i]);
    }*/
    printf("Agora dê o seu palpite:\n");
    int palpite[SLOTS] = {};
    int posiçãoC = 0;
    int numC = 0;
    // Could use int n_tentativas
    // Loop da leitura da senha
    for (int i = 0; i < SLOTS; i++)
    {
        // Could use fgets()        012
        scanf("%d", &palpite[i]); //249
    }
    // Loop de verificação da senha
    for (int i = 0; i < SLOTS; i++)
    {
        if (palpite[i] == senha[i])
        {
             posiçãoC++;
             numC++;
        }
        else if (palpite[i] != senha[i])
        {
            for (int j = 0; j < SLOTS; j++)
            {
                if (palpite[i] == senha[j]) // Could lead to problems with repeating numbers
                {
                    numC++;
                }
            }

        }


    }

    if (numC == 0)
    {
        printf("Nada está certo");
    }
    else if (numC != 0)
    {
        printf("\n%d%d%d", palpite[0], palpite[1], palpite[2]);
        printf(" - %d certo - %d posição certa\n", numC, posiçãoC);
    }

}
