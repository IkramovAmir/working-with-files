#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    FILE *output2 = fopen("output2.txt", "w");

    int n;

    while (fscanf(file, "%d", &n) != EOF)
    {
        if (n % 2 == 0)
            fprintf(output, "%d ", n);
        else
            fprintf(output2, "%d ", n);
    }

    fclose(file);
    fclose(output);
    fclose(output2);
    return 0;
}