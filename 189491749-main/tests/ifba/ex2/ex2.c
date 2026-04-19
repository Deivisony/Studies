#include <stdio.h>

int main(void)
{
    printf("Digite o número: ");
    int dezena = 0;
    int unidade;

    int val1;
    scanf("%d", &val1);
    printf("O número digitado foi %d\n", val1);
    dezena = val1 / 10;
    unidade = val1 % 10;

    switch(dezena)
    {
        case 0:
            break;
        case 1:
            break;
        case 2:
            printf("VINTE ");
            break;
        case 3:
            printf("TRINTA ");
            break;
        case 4:
            printf("QUARENTA ");
            break;
        case 5:
            printf("CINQUENTA ");
            break;
        case 6:
            printf("SESSENTA ");
            break;
        case 7:
            printf("SETENTA ");
            break;
        case 8:
            printf("OITENTA ");
            break;
        case 9:
            printf("NOVENTA ");
            break;
        case 10:
            printf("CEM ");
            break;
    }

    if ((dezena != 0 && dezena != 1) && (unidade != 0 && unidade < 10))
     printf("E ");
	if (dezena == 1)
	{
		switch(unidade)
		{
			case 1:
            printf("ONZE\n");
            break;
        	case 2:
            printf("DOZE\n");
            break;
        	case 3:
            printf("TREZE\n");
            break;
        	case 4:
            printf("QUATORZE\n");
            break;
        	case 5:
            printf("QUINZE\n");
            break;
        	case 6:
            printf("DEZESSEIS\n");
            break;
        	case 7:
            printf("DEZESSETE\n");
            break;
        	case 8:
            printf("DEZOITO\n");
            break;
        	case 9:
            printf("DEZENOVE\n");
            break;
		}
	}
	else
    switch(unidade)
    {
        case 0:
            break;
        case 1:
            printf("UM\n");
            break;
        case 2:
            printf("DOIS\n");
            break;
        case 3:
            printf("TRES\n");
            break;
        case 4:
            printf("QUATRO\n");
            break;
        case 5:
            printf("CINCO\n");
            break;
        case 6:
            printf("SEIS\n");
            break;
        case 7:
            printf("SETE\n");
            break;
        case 8:
            printf("OITO\n");
            break;
        case 9:;
            printf("NOVE\n");
            break;
        case 10:
            printf("DEZ\n");
            break;
        default:
            printf("VALOR INCORRETO\n");
    }
}
