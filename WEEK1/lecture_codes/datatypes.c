#include <stdio.h>
#include <cs50.h>

int main()
{
    int a = get_int("value of a");
    int b = get_int("value of b");
    if (a < b)
    {
        printf("a is less than b\n");
    }
    else if(a > b)
    {
        printf("a is greater than b\n");

    }
    else {
        printf("they are equal\n");
    }
}