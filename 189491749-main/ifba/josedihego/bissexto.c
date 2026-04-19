#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int dia, mes ,ano;
    int prox_dia, prox_mex, prox_ano;
    printf("Informe uma data dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia,&mes, &ano);
    printf("Testando... %02d/%02d/%02d\n", dia, mes, ano); //Padding de 0 assumindo 2 digitos.
    bool eh_bissexto;
    if (ano % 4 == 0) // Um ano é bissexto se for divísivel por 4, resto 0
    {
        eh_bissexto = true;
    }
    else
    eh_bissexto = false;
    // Se não for divisível nem por 100 e nem por 400, então o ano não é bissexto
    if ((ano % 100 != 0) && (ano % 400 != 0))
    {
        eh_bissexto = false;
    }

    // Inicio dos calculos da data seguinte

    /* Meses com 31 dias: Janeiro, Março, Maio, Julho, Agosto, Outubro, Dezembro.
    30 dias: Abril, Junho, Setembro, Novembro.
    28 ou 29 dias: Fevereiro. */


    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        if (dia < 30) // Soma um dia se for antes do dia 30.
        {
            dia++;
        }
        else // Se o dia for igual a 30 ou maior, reseta para o dia 1 e incrementa um mês
        {
            dia = 1;
            mes++;
            if (dia > 30)
            {
                printf("O dia informado é maior que a quantidade de dias do mês, assumindo o valor máximo de 30...\n");
            }
        }
    }
    else if (mes == 2)
    {
        if (eh_bissexto == false)
        {
            if (dia < 28)
            {
                dia++;
            }
            else
            {
                dia = 1;
                mes++;
                if (dia > 28)
                {
                    printf("O ano informado não é bissexto e a data é maior que 28, verifique a data novamente, assumindo 28 como o valor...\n");
                }
            }

        }
        else
        if (dia < 29)
        {
            dia++;
        }
        else
        {
            dia = 1;
            mes++;
            if (dia > 29)
                {
                    printf("O ano informado é bissexto e a data é maior que 29, verifique a data novamente, assumindo 29 como o valor...\n");
                }
        }

    }
    else
    if (mes == 12 && dia > 31)
    {
        ano++;
        dia = 1;
        mes = 1;
        if (dia > 31)
            {
                printf("O dia informado é maior que a quantidade de dias do mês, assumindo o valor máximo de 31...\n");
            }
    }
    else if (dia < 31)
    {
        dia++;
    }
    else
    {
        dia = 1;
        mes++;
        if (dia > 31)
            {
                printf("O dia informado é maior que a quantidade de dias do mês, assumindo o valor máximo de 31...\n");
            }
     }
    printf("O dia seguinte é %02d/%02d/%02d\n", dia, mes, ano);

}


