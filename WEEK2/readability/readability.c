#include <cs50.h>
#include <stdio.h>
#include <ctype.h> //header files
#include <math.h>


int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void) //main function
{
    string text = get_string("Text: ");

    int m = count_letters(text);
    int n = count_words(text);
    int p = count_sentences(text);

    float L = (float)m / (float)n * 100 ; //typecasting
    float S = (float)p / (float)n * 100 ;
    float index =  0.0588 * L  -  0.296 * S  - 15.8 ; //formula
    int a = round(index); //rounding

    if (a >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (a < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", a);
    }

}

int count_letters(string text) //1st function that counts letters
{
    int count = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isalpha(text[i]))
        {
            count++;
        }

    }
    return count;

}

int count_words(string text) //2nd function that counts words
{
    int count = 1;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isspace(text[i]))
        {
            count++;
        }

    }
    return count;

}

int count_sentences(string text) //3rd function that counts sentences
{
    int count = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            count++;
        }

    }
    return count;

}