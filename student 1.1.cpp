#include<stdio.h>
int main()
{
	int tot,stf,std,nts;
	printf("enter total number of users :",tot);
	scanf("%d",&tot);
	printf("enter total number staff users:",stf);
	scanf("%d",&stf);
	nts=stf/3;
	std=tot-stf-nts;
	printf("the student users are : %d",std);
}
