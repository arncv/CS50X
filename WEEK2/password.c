// password[i]eck that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{   int upper=0, lower =0, symbol =0, num =0 ;
    for (int i=0;i<strlen(password);i++)
    {
         if (password[i] >= 97 && password[i] <= 122)
        {
            lower++;
        }
        else if (password[i] >= 48 && password[i] <= 57)
        {
            num++;
        }
        else if (password[i] >= 65 && password[i] <= 90)
        {
            upper++;
        }
        else
        {
            symbol++;
        }


    }
    if (lower > 0 && num > 0 && upper > 0 && symbol > 0){
        return true;
    }
    else
    return false;
}
