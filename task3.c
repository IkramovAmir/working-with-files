#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    char words[50];
    int c = 0;
    int n;

    printf("Which line should be missed: ");
    scanf("%d", &n);
    
    if (!(n >= 1 && n <= 9))
    {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    while (fscanf(file, "%49s", &words) != EOF)
    {
        c++;

        if (n != c)
        {
            fprintf(output, "%s\n", words);
        }
    }

    fclose(file);
    fclose(output);
    return 0;
}