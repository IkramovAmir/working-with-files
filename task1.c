#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *pNum = fopen("input.txt", "r");

    int result = 0;
    int num;

    for (int i = 0; i < 10; i++)
    {
        fscanf(pNum, "%d", &num);
        result += num; 
    }
    
    printf("Result: %d", result/10);

    fclose(pNum);
    return 0;
}