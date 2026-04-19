#include <stdio.h>

int main(void)
{
    printf("Digite a senha do cadeado (com 3 algarismos):\n");
    int senha;
    scanf("%d", &senha);
    printf("A senha digitada foi: %d\n", senha);
    printf("Agora digite os 3 números atuais na face do cadeado:\n");
    int atual;
    scanf("%d", &atual);
    printf("Os números atuais são: %d\n", atual);
    // Calculo do primeiro algarismo
    int movimento_centena;
    if ((senha / 100) > (atual / 100))
    {
        printf("O primeiro algarismo da senha é maior que o primeiro algarismo do numero atual\n");
        movimento_centena = senha / 100 - atual / 100;
        // Ver se é o caminho mais rápido
        if (movimento_centena > 5)
        {
            int a1;
            a1 = (atual / 100) - movimento_centena;
            a1 = a1 * -1;
            a1 = a1 - (senha / 100);
            a1 = a1 * -1;
            printf("%d movimento(s) para baixo no primeiro algarismo do número atual\n", a1);
        }
        else
        {
            printf("%d movimento(s) para cima no primeiro algarismo do número atual\n", movimento_centena);
        }
    }
    else if ((senha / 100) < (atual / 100))
    {
        printf("O primeiro algarismo do número atual é maior que o primeiro da senha\n");
        movimento_centena = atual / 100 - senha / 100;
        // Ver se é o caminho mais rápido
        if (movimento_centena > 5)
        {
            int a1;
            a1 = (atual / 100) - movimento_centena;
            a1 = a1 * -1;
            a1 = a1 - (senha / 100);
            a1 = a1 * -1;
            printf("%d movimento(s) para cima no primeiro algarismo do número atual\n", a1);
        }
        else
        {
            printf("%d movimento(s) para baixo no primeiro algarismo do número atual\n", movimento_centena);
        }
    }
    else
    {
        printf("O primeiro algarismo do numero atual é igual a senha, sem movimentos necessários\n");
        movimento_centena = 0;
    }
    // Calculo do segundo algarismo
    int movimento_dezena;
    if ((senha % 100 / 10) > (atual % 100 / 10))
    {
        printf("O segundo algarismo da senha é maior que o segundo algarismo do numero atual\n");
        movimento_dezena = (senha % 100 / 10) - (atual % 100 / 10);
        // Ver se é o caminho mais rápido2
        if (movimento_dezena > 5)
        {
            int a2;
            a2 = (atual / 100) - movimento_dezena;
            a2 = a2 * -1;
            a2 = a2 - (senha / 100);
            a2 = a2 * -1;
            printf("%d movimento(s) para baixo no segundo algarismo do número atual\n", a2);
        }
        else
        {
            printf("%d movimento(s) para cima no segundo algarismo do número atual\n", movimento_dezena);
        }
    }
    else if ((senha % 100 / 10) < (atual % 100 / 10))
    {
        printf("O segundo algarismo da senha é menor que o segundo algarismo do numero atual\n");
        movimento_dezena = (atual % 100 / 10) - (senha % 100 / 10);
        printf("%d movimento(s) para baixo no segundo algarismo do número atual\n", movimento_dezena);
    }
    else
    {
        printf("O segundo algarismo do numero atual é igual a senha, sem movimentos necessários\n");
        movimento_dezena = 0;
    }
    // Calculo do terceiro algarismo
    int movimento_unidade;
    if (senha % 10 > atual % 10)
    {
        printf("O terceiro algarismo da senha é maior que o terceiro algarismo do numero atual\n");
        movimento_unidade = (senha % 10) - (atual % 10);
        // Ver se é o caminho mais rápido2
        if (movimento_dezena > 5)
        {
            int a3;
            a3 = (atual / 100) - movimento_centena;
            a3 = a3 * -1;
            a3 = a3 - (senha / 100);
            a3 = a3 * -1;
            printf("%d movimento(s) para baixo no terceiro algarismo do número atual\n", a3);
        }
        else
        {
            printf("%d movimento(s) para cima no terceiro algarismo do número atual\n", movimento_centena);
        }
    }
    else if (senha % 10 < atual % 10)
    {
        printf("O terceiro algarismo da senha é menor que o terceiro algarismo do numero atual\n");
        movimento_unidade = (atual % 10) - (senha % 10);
        printf("%d movimento(s) para baixo no terceiro algarismo do número atual\n", movimento_unidade);
    }
    else
    {
        printf("O terceiro algarismo do numero atual é igual a senha, sem movimentos necessários\n");
        movimento_unidade = 0;
    }
    printf("O menor numéro de movimentos necessário é %d\n", movimento_unidade + movimento_dezena + movimento_centena);

}

// 149
// 357
// Multiplicar por -1 pra tornar o numero positivo
// Formula para menor caminho negativo:
// a2 = (senha % 100 / 10) - (atual % 100 / 10);
// a2 = a2 * -1
// a2 = a2 - atual /100
