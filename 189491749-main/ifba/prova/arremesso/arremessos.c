#include <stdio.h>

int main(void)
{
    printf("Insira a porcentagem de acertos curtos, medios e longos: ");
    float acertosC;
    float acertosM;
    float acertosL;
    scanf("%f %f %f", &acertosC, &acertosM, &acertosL);
    float esperancaC = acertosC * 2;
    float esperancaM = acertosM * 2;
    float esperancaL = acertosL * 3;
    if (esperancaC > esperancaM && esperancaC > esperancaL)
    {
        printf("Preferir arremessos de curta distância (%.3f pontos por arremesso)\n", esperancaC);
    }
    else if (esperancaM > esperancaC && esperancaM > esperancaL)
    {
        printf("Preferir arremessos de média distância (%.3f pontos por arremesso)\n", esperancaM);
    }
    else
    {
        printf("Preferir arremessos de longa distância (%.3f pontos por arremesso)\n", esperancaL);
    }

}
