#include<stdio.h>


struct employees
{
    int Empno;
    char name[100], phn_no[10], age[2];
    float Salary;
};

main()
{   
    int i;
    struct employees e1[10];
    for(i=0;i<20;i++)
    {
        printf("\nEnter details of employee %d",i+1);
        printf("\nEmployee name:");
        scanf("%s",e1[i].name);
        printf("\nPhone Number :");
        scanf("%s",e1[i].phn_no);
        printf("\nAge :");
        scanf("%s",e1[i].age);
        printf("\nSalary:");
        scanf("%f",&e1[i].Salary);
    }
   
    for(i=0;i<20;i++)
    {
        printf("\n\nDetails of employee %d",i+1);
        printf("\n\tEmployee nam :%s",e1[i].name);
        printf("\n\tEmployee phone number :%d",e1[i].phn_no);
        printf("\n\tEmployee age :%d",e1[i].age);
        printf("\n\tSalary=%.2f",e1[i].Salary);
    }
   
} 
