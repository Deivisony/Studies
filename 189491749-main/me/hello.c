#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What is your name?\n"); // Asks and gets the user for a name input
    printf("hello, %s\n", name);
}
