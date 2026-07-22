#include <stdio.h>
#include <stdbool.h>
#define T 8
// Prova em: https://github.com/josedihego/programacaoC/blob/main/INF027_listas_provas_PDF/avaliacao_4_ano_2025_1.pdf
int main(void)
{
    // Já declara pra fins de teste
    char terreno[T][T] = {
    {'2', '7', '7', '5', '5', '4', '7', '8'},
    {'2', '9', '9', '8', '5', '4', '3', '9'},
    {'3', '4', '8', '9', '9', '9', '8', '9'},
    {'2', '2', '1', '1', '5', '5', '6', '9'},
    {'6', '6', '7', '3', '6', '6', '8', '9'},
    {'9', '9', '8', '8', '6', '5', '5', '5'},
    {'4', '4', '4', '3', '3', '3', '9', '9'},
    {'9', '9', '9', '8', '6', '9', '9', '1'}
};
    // Ler matriz do Terreno
    /*char terreno[T][T] = {"'\0'"}; //Tentar fazer com inteiro dps

    for (int l = 0; l < T; l++)
    {
        for (int c = 0; c < T; c++)
        {
            scanf("%c", &terreno[l][c]);
        }
    }*/

    char intensidade; // Comparar chars como valores numericos
    scanf("%c", &intensidade);

    bool continua = false;
    if(terreno[0][0] <= intensidade)
    {
        continua = true;
        terreno[0][0] = '*';
    }
        // Aqui tinha um 'while (continua == true) {'
        for (int l = 0; l < T; l++)
        { // Tinha um 'continua = false;' por aqui
            for (int c = 0; c < T; c++)
            {
                if (terreno[l][c] == '*')
                {
                    // Testa cima
                    // Subtrai linha e mantem coluna
                    // Menor ou igual a 7 ou t - 1 que é o limite da matriz
                    if (l - 1 >= 0)
                    {
                        if (terreno[l - 1][c] != '*' && terreno[l - 1][c] <= intensidade)
                        {
                            terreno[l - 1][c] = '*';
                        }
                    }
                    // Testa baixo
                    // Adiciono linha e mantem coluna
                    if (l + 1 < T)
                    {
                        if (terreno[l + 1][c] != '*' && terreno[l + 1][c] <= intensidade)
                        {
                            terreno[l + 1][c] = '*';
                        }
                    }
                    // Testa esquerda
                    // subtrai coluna mantem linha
                    if (c - 1 >= 0)
                    {
                        if (terreno[l][c - 1] !='*' && terreno[l][c - 1] <= intensidade)
                        {
                            terreno[l][c - 1] = '*';
                        }
                    }
                    // testa direita
                    // adiciona coluna mantem linha
                    if (c + 1 < T)
                    {
                        if (terreno[l][c + 1] != '*' && terreno[l][c + 1] <= intensidade)
                        {
                            terreno[l][c + 1] = '*';
                        }
                    }
                }
            }
        }
    // } O while fechava nessa linha

    // Imprime com lava
    for (int l = 0; l < T; l++)
    {
        for (int c = 0; c < T; c++)
        {
            printf("%c ", terreno[l][c]);
        }
        printf("\n");
    }
  
    return 0;

    /*char caractere = '0';
    printf("a letra %c equivale ao inteiro %i\n", caractere, caractere);*/

}
