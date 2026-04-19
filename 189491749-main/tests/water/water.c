#include <cs50.h>
#include <stdio.h>

const int LPM = 9; // Liters per minute on a generic showerhemain(void)
{
    int min = get_int("Quantos minutos você leva no banho? \n");
    min *= LPM / 0.5; // Half a liter or 500ml is a common water bottle
    printf("Isso equivale a %i garrafinhas d'água\n", min);
}
