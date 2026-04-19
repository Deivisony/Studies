#include <cs50.h>
#include <stdio.h>

void bricks(int row);
int main(void)
{
    // Asks for the 'h' height of the pyramid
    int h;
    do
    {
        h = get_int("What is the pyramid's height?\n");
    }

    while (h < 1 || h > 8);

    // Main loop for printing the next row
    for (int row = 0; row < h; row++)
    {

        // Loop for printing the left side blank spaces before the bricks
        for (int blanks = 0; blanks < h - (row + 1); blanks++)
        {
            printf(" ");
        }

        // Loop for printing the LEFT side bricks
        bricks(row + 1);

        // gap
        printf("  ");

        // Loop for printing the RIGHT side bricks
        bricks(row + 1);

        printf("\n");
    }

}

// Loop function for printing the bricks
void bricks(int row)
{
    for (int brick = 0; brick < row; brick++)
    {
        printf("#");
    }
}
