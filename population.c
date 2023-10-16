#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)

{
    int i;
    int j;
    do
    {
        i = get_int("Start Size: "); // promting for starting lamas
    }
    while (i < 9);
    do
    {
        j = get_int("End Size: "); // promoting of goal number of lamas
    }
    while (i > j);

    int Years = 0;
    while (i < j)
    {
        i = i + (i / 3) - (i / 4);
        Years++;
    }
    printf("Years: %i", Years);
}