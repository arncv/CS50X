#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int n;
    do
    {
        n = get_int("Positive Integer: ");
    }
    while (n < 9);

    // TODO: Prompt for end size
    int m;
    do
    {
        m = get_int("Positive Integer: ");
    }
     while (m < n);

    // TODO: Calculate number of years until we reach threshold
    int y ;
    for (y = 0; n < m; y++)
    {
        n = n + (n / 3) - (n / 4);
    }

    // TODO: Print number of years
      if (n == m)
     {
        printf("Years: %i\n", y);
     }
    printf("Years: %i\n", y);
}
