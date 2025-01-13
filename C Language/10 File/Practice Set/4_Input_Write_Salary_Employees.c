/*
    take name and salary of two employees as input from the user
    and write them to a text file in the following format
    name1, 45000
    name2, 59000
*/
#include<stdio.h>

int main()
{
    int num;
    float salary;
    char employee[20];
    printf("enter the number of ");
    scanf("%d",&num);
    FILE *ptr;
    ptr=fopen("4_Input_Write_Salary_Employees.txt","w");
    for(int i=0;i<num;i++)
    {
        printf("enter the emoployee name is ");
        scanf("%s",&employee);
        printf("enter the salary is ");
        scanf("%f",&salary);
        fprintf(ptr,"%d employee name is %s salary %f\n",i+1,employee,salary);
    }
    fclose(ptr);
    return 0;
}
