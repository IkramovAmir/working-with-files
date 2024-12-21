#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    FILE *file = fopen("input.txt", "r");
    FILE *ouput = fopen("output.txt", "w");
    FILE *ouput2 = fopen("output2.txt", "w");

    char info[50];
    int num;
    

    while (fgets(info, sizeof(info), file))
    {
        int n;
        for (int i = 0; info[i] != '\0'; i++)
        {
            if (info[i] == )
            {
                
            }
            
        }
        printf("%d\n", n);
    }

    return 0;
}