#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int coins(int cents);

int main(void)
{

    int owed = get_cents();
    int cents = (owed);
    printf("%d\n", coins(cents));
}
int coins(int cents)
{
    int count = 0;

    while (cents > 0)
    {
        if (cents >= 25)
        {
            cents -= 25;
            count++;
        }
        else if (cents >= 10)
        {
            cents -= 10;
            count++;
        }
        else if (cents >= 5)
        {
            cents -= 5;
            count++;
        }
        else
        {
            cents -= 1;
            count++;
        }
    }
    return count;
}

int get_cents(void)
{
    int change;
    do
    {
        change = get_int("Change owed: ");
    }
    while (change < 0);

    return change;
}