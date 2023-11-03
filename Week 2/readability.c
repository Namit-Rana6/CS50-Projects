#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)

{
    // Declaring various Variables

    string x = get_string("Text : "); // Promptign the user for a string

    int words = 0;
    int sentences = 0;
    int n = 0;
    int letters = 0;
    int j = strlen(x);

    // Counting Words
    for (int i = n; i < j; i++)
    {
        if (x[i] == ' ')
        {
            words++;
        }

        // Counting Sentences
        if (x[i] == '!' || x[i] == '?' || x[i] == '.')
        {
            sentences++;
        }
        // Counting letters

        if (isalpha(x[i]) != 0)
        {
            letters++;
        }
    }

    float l = ((float) letters / (float) words) * 100;
    float s = ((float) sentences / (float) words) * 100;

    float Q = (0.0588 * l - 0.296 * s - 15.8);
    int QQ = round(Q);

    if (QQ > 16)
    {
        printf("Grade 16+\n");
    }
    else if (QQ < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", QQ);
    }
}