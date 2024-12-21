#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{

    FILE *file = fopen("input.txt", "r");
    FILE *file2 = fopen("input2.txt", "r");
    FILE *output = fopen("output.txt", "w");

    char line[50];
    char line2[50];
    char j[] = " ";
    char s[] = "-";

    while (fgets(line, sizeof(line), file) && fgets(line2, sizeof(line2), file2))
    {
        for (int i = 0; line[i] != '\0'; i++)
        {
            if (line[i] == '\n')
                fputc(j[0], output);
            else
            {
                fputc(line[i], output);
            }
        }

        for (int i = 0; line[i] == '\0'; i++)
        {
            fputc(j[0], output);
        }
        
        for (int i = 0; line2[i] != '\0'; i++)
        {
            if (i == 0)
            {
                fputc(s[0], output);
            }
            fputc(line2[i], output);
        }
    }

    fclose(file);
    fclose(file2);
    fclose(output);

    return 0;
}