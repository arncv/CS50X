#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h> //add header files

char rotate(char c, int n); //function call

int main(int argc, string argv[])
{

    if (argc != 2) //avoiding core dump
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    while (argc == 2)
    {
        string strkey = argv[1];
        int n = strlen(strkey);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (isdigit(strkey[i])) //checks argv
            {
                count++;
            }
            else
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }

        }

        if (count == n)
        {

            int key = atoi(strkey);
            string plain = get_string("plaintext:  "); //input
            int a = strlen(plain);
            printf("ciphertext: ");//output
            for (int j = 0; j < a; j++)
            {
                if (isalpha(plain[j]))
                {
                    char cipher = rotate(plain[j], key);
                    printf("%c", cipher); //printing cipher
                }
                else
                {
                    printf("%c", plain[j]);
                }

            }
            printf("\n");
            return 0; //exit program

        }

    }



}



char rotate(char c, int n) //function rotate
{

    if isalpha(c)
    {
        if (isupper(c))
        {
            char upper = c - 65 ;
            char C = (upper + n) % 26 ;
            char X = C + 65 ;
            return X;

        }

        else if (islower(c))
        {
            char lower = c - 97 ;
            char C = (lower + n) % 26 ;
            char X = C + 97 ;
            return X;
        }
        else
        {
            return c;
        }
    }

    else
    {
        return c;
    }
}
