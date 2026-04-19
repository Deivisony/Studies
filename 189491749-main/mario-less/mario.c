#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Asks for the 'h' height of the pyramid
    int h;
    do
    {
        h = get_int("What is the pyramid's height?\n");
    }

    while (h < 1);

    // Main loop for printing the next row of bricks
    for (int bricks = 1; bricks <= h; bricks++)
    {

        // Loop for printing the blank spaces before the bricks
        for (int j = 0; j < h - bricks; j++)
        {
            printf(" ");
        }

        // Loop for printing the bricks
        for (int k = 1; k <= bricks; k++)
        {
            printf("#");
        }

        printf("\n");
    }
}
