#include <stdio.h>

int main(void)
{
    printf("Digite o número: ");
    int dezena = 0;
    int unidade;

    /*if (val1 == 1)
    {
        printf("Um\n");
    }
    else if (val1 == 2)
    {
        printf("Dois\n");
    }
    else if (val1 == 3)
    {
        printf("Tres\n");
    }
    else if (val1 == 4)
    {
        printf("Quatro\n");
    }*/





    /*if (dezena == 2)
    {
       printf("vinte");
    }
    printf(" e ");
    if (unidade == 4)
    {
       printf("quatro");
       printf("\n");
    }*/




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
            printf("DEZ\n");
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

    if (dezena != (0 || 1) && unidade != 0 && unidade > 10)
     printf("E ");

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
        case 11:
            printf("ONZE\n");
            break;
        case 12:
            printf("DOZE\n");
            break;
        case 13:
            printf("TREZE\n");
            break;
        case 14:
            printf("QUATORZE\n");
            break;
        case 15:
            printf("QUINZE\n");
            break;
        case 16:
            printf("DEZESSEIS\n");
            break;
        case 17:
            printf("DEZESSETE\n");
            break;
        case 18:
            printf("DEZOITO\n");
            break;
        case 19:
            printf("DEZENOVE\n");
            break;
        default:
            printf("VALOR INCORRETO\n");
    }

 /*if (val1 == 22)
 {
    printf("dez") && printf("oito");
    printf("\n");
 }
 if (val1 == 23)
 {
    printf("dez") && printf("e") && printf("nove");
    printf("\n");
 }*/




}
