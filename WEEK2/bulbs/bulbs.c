#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h> //add header files

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // get string
    string text = get_string("Message: ");
    int n = strlen(text);

    for (int i = 0; i < n; i++)
    {
        int j = text[i];


        int arr[32];
        int k = 8;
        while (k != 0) //looping
        {
            arr[8 - k] = j % 2;
            j = j / 2;
            k--;
        }

        for (int a = 0; a < 8 ; a++)
        {
            print_bulb(arr[8 - a - 1]);
        }
        printf("\n");

    }
}
void print_bulb(int bit) //bulb function
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
