#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int pyheight;
    int n;

    do
    {
        pyheight = get_int("Height : ");
    }
    while (pyheight < 1 || pyheight > 8);
    printf("Stored : %i\n", pyheight);

    for (int i = 1; i <= pyheight; i++)
    {
        for (int j = pyheight - 1; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
