#include <cs50.h>
#include <stdio.h>

int main(void)
{
    const int MINE = 2;
    int points = get_int("How many points did you lose?");

    if (points < MINE)
    {
        printf("you lost fewer points than me");
    }
    else if (points > MINE)
    {
        printf("you lost more points than me");
    }
    else
    {
        printf("we have lost the same ponts\n");
    }

}