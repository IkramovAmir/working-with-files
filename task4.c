#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *input_file = fopen("input.txt", "r");
    FILE *output_file = fopen("output.txt", "w");

    int number, s = 0;

    for (int i = 0; i < 5; i++)
    {
        fscanf(input_file, "%d", &number);
        fprintf(output_file, "%d + ", number);
        s += number;
    }

    fprintf(output_file, "= %d", s);

    fclose(input_file);
    fclose(output_file);

    return 0;
}