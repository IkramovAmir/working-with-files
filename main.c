#include <stdio.h>

int main () {
    FILE *input_file = fopen("input.txt", "r");
    // FILE *output_file = fopen("output.txt", "w");

    // int number;
    // int t = 0;

    // for(int i = 0; i < 5; i++)
    // {
    //     fscanf(input_file, "%d", &number);
    //     t += number;
    // }
    
    // fprintf(output_file, "sum = %d", t);

    // fclose(input_file);
    // fclose(output_file);
    char name[10];
    // FILE *ptr = fopen("text.txt", "a");
    fscanf(name,"%s", input_file);
    printf("Salom %s!\n", name);

    fclose(input_file);
    // fprintf(ptr, "\n I am Amir");
    // if (remove("text.txt") == 0)
    // {
    //     printf("That file was deleted successfully!!!");
    //     return 0;
    // }
    

    // fclose(ptr);


    return 0;
}