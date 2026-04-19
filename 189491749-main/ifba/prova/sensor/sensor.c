#include <stdio.h>

int main(){

    int kmPercorridos, sensor;

    printf("Informe a quantidade de quilometros :\\> ");
    scanf("%d", &kmPercorridos);

    sensor = ((kmPercorridos - 3) % 8) - 2;

    printf("Sensor : %d\n", sensor);

    return 0;
}

