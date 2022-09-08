#include<stdio.h>

main()
{
 float salary,bonus;
 char gender;
 printf("\n Enter M for Male and F for Female\n ");
 scanf("%c",&gender);
 printf(" Enter Salary\n ");
 scanf("%f",&salary);
 if(gender=='M' || gender=='m')
 {
  if(salary>10000)
  bonus=(float)(salary*0.05);//0.05--5%
  else
  bonus=(float)(salary*0.07);
 }
 if(gender=='F' || gender=='f')
 {
  if(salary>10000)
  bonus=(float)(salary*0.1);//0.1--10%
  else
  bonus=(float)(salary*0.12);
 }
 salary+=bonus;
 printf("\n Bonus=%.2f\n Salary=%.2f\n",bonus,salary);
 
}

