#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    FILE *file = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    int file1;

    fscanf(file, "%d", &file1);
    fprintf(output, "%d\n", file1);

    while (fscanf(file, "%d", &file1) != EOF)
    {
        if (fscanf(file, "%d", &file1) == EOF)
        {
            fprintf(output, "%d", file1);
        }
    }

    fclose(file);
    fclose(output);

    return 0;
}