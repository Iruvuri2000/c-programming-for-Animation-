#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("enter the username:");
	scanf("%s",str1);
	printf("reenter the username:");
	scanf("%s",str2);
	if((strcmp(str1,str2)==0))
	{
		printf("username is valid");
	}
	else
	{
		printf("username is invalid");
	}
	return 0;
}
