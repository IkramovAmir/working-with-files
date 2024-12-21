#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *file = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    char words[100];
    char j[] = " ";
    while (fscanf(file, "%s", words) != EOF)
    {
        for (int i = 0; words[i] != '\0'; i++)
        {
            if (i == 0)
            {
                fputc(words[i] - 32, output);
            };

            if(i != 0) {
                fputc(words[i], output);
            }
        }
        fprintf(output, "%c", j[0]);
    }

    return 0;
}

