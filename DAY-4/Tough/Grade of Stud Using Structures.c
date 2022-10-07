#include <stdio.h>
#include <conio.h>
struct student{
    char name[25];
    int rollno;
    int m1,m2,m3,m4;
    int marks =m1+m2+m3+m4/4;
    char grade;
};
int main()
{
    struct student stud[15];
    int i,n;
    printf("ENTER THE NUMBER OF STUDENTS:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ENTER STUDENT INFORMATION:\n");
        printf("NAME:");
        scanf("%s",&stud[i].name);
        printf("ROLLNO:");
        scanf("%d",&stud[i].rollno);
        printf("python:");
        scanf("%d",&stud[i].m1);
        printf("c programming:");
        scanf("%d",&stud[i].m2);
        printf("physics:");
        scanf("%d",&stud[i].m3);
        printf("maths:");
        scanf("%d",&stud[i].m4);
        printf("MARKS(In Percentage):",stud[i].marks);   
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        if(stud[i].marks <= 50) 
        { 
            stud[i].grade = 'F'; 
        } 
        else if(stud[i].marks > 50 && stud[i].marks <= 55) 
        { 
            stud[i].grade = 'D'; 
        } 
        else if(stud[i].marks > 55 && stud[i].marks <= 60) 
        { 
            stud[i].grade = 'C'; 
        } 
        else if(stud[i].marks > 60 && stud[i].marks <= 75) 
        { 
            stud[i].grade = 'B'; 
        } 
        else if (stud[i].marks > 75 && stud[i].marks <= 90) 
        { 
            stud[i].grade = 'A'; 
        } 
        else if(stud[i].marks > 90)
        {
            stud[i].grade = 'S';
        }
    }
    for(i = 0;i<40;i++)
    printf("_");printf("\n");
    printf("Name\tRollNo\tMarks\tGrade\n");
    for(i = 0;i<40;i++)
    printf("_");printf("\n");
    for(i=0;i<n;i++)
        {
        printf("%s\t%d\t%d\t%c\n",stud[i].name,stud[i].rollno,stud[i].marks,stud[i].grade);
   }
    for(i = 0;i<40;i++)
   printf("_");printf("\n");
   getch();
       return 0;
}