// Program to calculate the minimum number of coins needed to give change using greedy algorithm
// Coin denominations: 25¢, 10¢, 5¢, 1¢
// Remember to use Pointers and Arrays later in the course
#include <cs50.h>
#include <stdio.h>

#define LOBO 200
#define CARPA 100
#define ONÇA 50
#define MICO 20
#define ARARA 10

// Subtracts the given coin value from the change and increments the coin counter
void cashier(int coin);

// Global variable to store total number of coins used, initialized at zero
int counter = 0;
// Global variable to store the remaining amount of change owed
int change;

int main(void)
{
    // Prompt the user until a non-negative amount is entered
    do
    {
        change = get_int("Change owed: ");
    }
    while (change < 0);
    // Main loop for subtracting the amount of change until there is none
    while (change > 0)
    {
        // Deduct the highest possible coin value from change and increment the coin counter
        if (change >= QUARTER)
        {
            cashier(QUARTER);
        }
        else if (change >= DIME)
        {
            cashier(DIME);
        }
        else if (change >= NICKEL)
        {
            cashier(NICKEL);
        }
        else if (change >= PENNY)
        {
            cashier(PENNY);
        }
    }
    printf("Total coins: %i\n", counter);
}

void cashier(int coin)
{
    change -= coin;
    counter++;
}
