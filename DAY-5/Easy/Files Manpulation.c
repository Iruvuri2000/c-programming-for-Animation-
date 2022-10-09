#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("Welcome sai Tharun \n\n");
char character;
FILE *fpointer;
fpointer = fopen("C:\\program.txt","w"); 
if(fpointer == NULL)
{
printf("Cool Bro THis is not Gonna Open.");
exit(0);
}
printf("Enter a character: ");
scanf("%c",&character);
fprintf(fpointer,"%c",character); 
fclose(fpointer);
return 0;
}