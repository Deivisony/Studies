//rontgen
#include <stdio.h>
#define MAX 255
#define chars 2

int main(void)
{
	char entrada[chars];
	int iteracao;
    int temp;
    int qtde;
    char sequencia[255];
    scanf("%s", entrada);
    scanf("%i", &iteracao);
    for (int i = 0; i < iteracao; i++)
    {
        temp = entrada[i];
        qtde = 1;
        while (entrada[i] == entrada[i+1])
        {
            qtde++;
            i++;
        }
        for (int j = 0; j < chars; j+=2)
        {
            sequencia[j] = '1';
            sequencia[j+1] = entrada[j];
        }
        entrada = sequencia;
        //sscanf

    }
}


for(iCont = 0; iCont <  QTDE_NUMEROS;  iCont++)
    {
        qtde = 1;
        while(numeros[iCont] == numeros[iCont+1] && iCont <  QTDE_NUMEROS-1)
        {
            qtde++;
            iCont++;
        }
        if(qtde > maior)
            maior = qtde;
    }
