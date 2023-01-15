#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char subs(char c, string key);

bool unique(string a);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n"); //checks no. of input
        return 1;
    }

    if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n"); //checks no. of letters
        return 1;
    }


    string key = argv[1]; //assigns cli input to a string
    int count = 0;
    if (unique(key) == 0) //check uniqueness
    {
        printf("Key must contain 26 unique characters.\n");
        return 1;
    }

    for (int i = 0; i < strlen(key); i++) // checks alphabet or not
    {
        if (isalpha(key[i]))
        {
            count++;
        }
        else
        {
            printf("Key must contain alphabetic characters.\n");
            return 1;
        }
    }

    if (count == strlen(key))
    {
        string plain = get_string("plaintext:  ");
        int a = strlen(plain);
        printf("ciphertext: "); //output
        for (int j = 0; j < a; j++)
        {
            if (isalpha(plain[j]))
            {
                char cipher = subs(plain[j], key);
                printf("%c", cipher); //printing cipher
            }
            else
            {
                printf("%c", plain[j]); //prints non alphabetic characters
            }

        }
        printf("\n");
        return 0; //ends program
    }

    return 0;

}


char subs(char c, string key) //substitute function
{

    if isalpha(c)
    {
        if (isupper(c)) //substitute upper case
        {
            char upper = c - 65 ;
            int C = (int)upper;
            char X = toupper(key[C]) ;
            return X;
        }

        else if (islower(c)) //substitute lower case
        {
            char upper = c - 97 ;
            int C = (int)upper;
            char X = tolower(key[C]) ;
            return X;

        }
        else
        {
            return c;
        }
    }
    return c;

}


bool unique(string a) //checks if each alphabet is unique or not
{
    int i, j;
    int count = 0;
    int n = strlen(a);
    for (int x = 0; a[x] != '\0'; x++)
    {
        if (a[x] >= 'a' && a[x] < 'z')
        {
            a[x] = a[x] - 32;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j] && i != j)
            {
                break;
            }

        }
        if (j == n)
        {
            ++count;
        }
    }
    if (count == 26)
    {
        return true;
    }
    else
    {
        return false;
    }

}