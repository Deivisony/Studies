#include <stdio.h>
#define TAM_BARRA 14
#define QTDE_ALGARISMOS 10
int main(void)
{
    int barra[TAM_BARRA] = {9, 4, 3, 9, 1, 2, 4, 5, 1, 1, 9, 7, 0, 5};
    int entrada[QTDE_ALGARISMOS] = {1};
    int algarismo;
    int iCont;

    printf("Digite a sequência de valores para as posições da barra\n");
    for (int i = 0; i < TAM_BARRA; i++)
    {
        scanf("%i", &barra[i]);
    }
    printf("Digite a entrada de valores para movimentar o cursor da barra\n");
    for (int i = 0; 1; i++)
    {
        while(entrada > 0)
        {
            scanf("%i", &entrada[i]);
        }
    }








/*1.declarar int array barra = 14
2.Inicie int array barra = {0}
3. Declarar int Entrada
4.While(true)
5.  scanf(%i", &entrada
6.    if (entrada <=0)
7.	break;
8.

5.Leia
6. Se <= 0 Encerre.*/




}
