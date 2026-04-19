/*1 Declara int estação, nComandos, devastado, permanece = 0
2 Declara int comando[nComandos8] = {0}
3 Leia estação, nComandos, devastado
4 Declara int atual = 1
4 Loop i = 0 até < (nComandos8)
5  Leia comando[i]
6 FimLoop
7 Loop i = 0 até < (nComandos8)
8  atual = atual + comando[i]
9  Se (atual == devastado || atual + nComandos == devastado)
10  permanece++
12Escreva permanece*/
#include <stdio.h>

int main(void)
{
    int estação, nComandos, devastado, permanece = 0;
    scanf("%i %i %i", &estação, &nComandos, &devastado);
    int comando[nComandos];
    int atual = 1;
    for (int i = 0; i < nComandos; i++)
    {
        scanf("%i", &comando[i]);
    }
    for (int i = 0; i < nComandos; i++)
    {
        atual = atual + comando[i];
        if (atual == devastado || atual + nComandos == devastado)
        {
            permanece++;
        }
    }
    printf("%i\n", permanece);

}






/*abs -

int modulo = (numero < 0) ? (numero * -1) : numero;*/
