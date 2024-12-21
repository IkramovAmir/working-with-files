#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    FILE *file = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    char characters[100];
    char character;

    fgets(characters, sizeof(characters), file);

    char symbol[] = "&+-()*!@#$^_/";
    int s = 0;

    for (int i = 0; characters[i] != '\0'; i++)
    {
        int count = 0;
        for (int j = i; characters[j] != '\0'; j++)
        {
            if (characters[j] == symbol[s])
            {
                count++;
                character = characters[j];
            }
        }
        if (count > 0)
        {
            fprintf(output, "%c  %d ta\n", character, count);
            s++;
        }
    }

    fclose(file);
    fclose(output);

    return 0;
}