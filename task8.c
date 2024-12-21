#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *file = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "a");

    int l;

    while (fscanf(file, "%d", &l) != EOF)
    {
        fprintf(output, "%c", l);
    }
    

    fclose(file);
    fclose(output);

    return 0;
}