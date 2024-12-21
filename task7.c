#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *file = fopen("input.txt", "r");
    FILE *file2 = fopen("input2.txt", "r");
    FILE *output = fopen("output.txt", "w");

    
    char line[50];
    char line2[50];

    while (fgets(line, sizeof(line), file))
    {
        fprintf(output, "%s", line);
    }

    while (fgets(line2, sizeof(line2), file2))
    {
        fprintf(output, "%s", line2);
    }
    
    fclose(file);
    fclose(file2);
    fclose(output);

    return 0;
}