#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE * fPtr;
    char ch;
    fPtr = fopen("Sai Tharun", "r");
    if(fPtr == NULL)
    {   
        printf("Unable to open file.\n\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(EXIT_FAILURE);
    }
    printf("File opened successfully. Reading file contents character by character. \n\n");
    do 
    {
        ch = fgetc(fPtr);
        putchar(ch);
    } while(ch != EOF);
    fclose(fPtr);
    return 0;
}