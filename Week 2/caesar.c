#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])

{

    if (argc == 2 && isdigit(*argv[1]))
    {
        int k = atoi(argv[1]);
        string q = get_string("plaintext: ");
        printf("ciphertext: ");

        for (int i = 0, a = strlen(q); i < a; i++)
        {
            if (q[i] >= 'A' && q[i] <= 'Z')
            {
                printf("%c", (((q[i] - 'A') + k) % 26) + 'A');
            }
            else if (q[i] >= 'a' && q[i] <= 'z')
            {
                printf("%c", (((q[i] - 'a') + k) % 26) + 'a');
            }
            else

            {
                printf("%c", q[i]);
            }
        }
        printf("\n");
        return 0;
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}