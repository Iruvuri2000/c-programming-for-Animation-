#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[100];
	int i;
	int upper=0,lower=0,num=0,special=0;
	printf("please enter the string \n");
	gets(str);
	for(i=0; str[i] !='\0'; i++)
	{
		if(str[i]>='A'&& str[i]<='Z') {
			upper++;
		}else if(str[i]>='a'&& str[i]<='z'){
			lower++;
		}else if(str[i]>='1'&& str[i]<='9'){
			num++;
		}
		else{special++;
		}
	}
	printf("\nUpper case lettyer : %d",upper);
	printf("\nLower case letter:%d",lower);
	printf("\nNumbers:%d",num);
	printf("\nSpecial characters :%d",special);
	return 0;
}
