// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string word);

int main(int argc, string argv[])
{
    string word = argv[1];
    if (argc != 2)
    {
        printf("Usage: ./no-vowels word\n");
        return 1;
    }

    string new_word = replace(word);
     printf("%s\n",new_word);
}


string replace(string word )
    {

    int n = strlen(word);
    string replaced = word;

     for (int i = 0; i < n; i++)
     {
        if (replaced[i] == 'a')
        {
            replaced[i] = '6' ;
        }
        else if(replaced[i] == 'e')
        {
            replaced[i] =  '3' ;
        }
        else if(replaced[i] == 'i')
        {
            replaced[i] = '1' ;
        }
        else if(replaced[i] == 'o')
        {
            replaced[i] = '0' ;
        }
     }
     return replaced ;
    }
