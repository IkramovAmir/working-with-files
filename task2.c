#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *word = fopen("input.txt", "r");
    FILE *write = fopen("output.txt", "w");

    int max, min;
    int count = 0;
    char Words[50];
    char Maxword[50], Minwords[50];

    fscanf(word, "%s", &Words);
    max = strlen(Words);
    min = strlen(Words);
    // printf("%d", max);

    while (fscanf(word, "%s", &Words) != EOF)
    {
        count = strlen(Words);

        if (max < count)
        {
            max = count;
            strcpy(Maxword, Words);
        }
        if (min > count)
        {
            min = count;
            strcpy(Minwords, Words);
        }   
    }

    // for (int i = 0; Words != NULL; i++)
    // {
    //     fscanf(word, "%s", &Words);
    // }

    // fprintf(write, "%d\n", max);
    fprintf(write, "Eng uzun so'z: %s\n", Maxword);
    // fprintf(write, "%d\n", min);
    fprintf(write, "Eng qisqa so'z: %s", Minwords);

    // for (int i = 0; Words[i] != '\0'; i++)
    // {
    //     fgets(word, 200, &Words);

    //     for (int j = 0; Words[j] != '\0'; j++)
    //     {
    //         if (Words[j] != ' ')
    //         {
    //             count++;
    //         }
    //     }

    //     if (max < count)
    //     {
    //         max = count;
    //         count = 0;
    //     }
    // }

    // printf("Result: %d", result / 10);
    fclose(word);
    fclose(write);

    return 0;
}
// #include <stdio.h>
// #include <stdlib.h>

// int main() {

//     FILE *input = fopen("input.txt", "r");
//     FILE *input2 = fopen("input2.txt", "r");
//     FILE *output = fopen("output.txt", "w");

//     char line[155];
//     char line2[155];

//     while (fgets(line, sizeof(line), input) && fgets(line2, sizeof(line2), input2)) {
//         fprintf(output, "%s - %s", line, line2);
//     }

//     return 0;
// }