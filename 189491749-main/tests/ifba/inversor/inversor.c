#include <stdio.h>

int main() {
    int num, invertedNum;

    printf("Digite um número de 3 algarismos: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Erro: O número deve ter exatamente 3 algarismos.\n");
        return 1;
    }

    int centenas = num / 100;
    int dezenas = (num / 10) % 10;
    int unidades = num % 10;

    invertedNum = unidades * 100 + dezenas * 10 + centenas;

    printf("Número invertido: %.3d\n", invertedNum);

    return 0;
}
