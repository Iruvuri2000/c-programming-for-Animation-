#include<stdio.h>
main()
{
	float amount;
	float tax=0;
	printf("Enter You're income: ");
	scanf("%f",&amount);
	if(amount<=150000)
	prinf("no tax");
	{
		tax=0;
	}
	else if(amount>150000 && amount<=300000)
	{
		tax=amount*0.1;
	}
	else if(amount>300000 && amount<=500000)
	{
		tax=amount*0.2;
	}
	else
	{
		tax=amount*0.3;
	}
	if(tax<=0)
	{
		printf("\n invalid \n");
	}
	else
	{
		printf("\nThe tax = %.2f\n",tax);
	}
	getchar();
}
