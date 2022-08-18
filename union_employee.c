#include<stdio.h>
#include<string.h>
union employee
{
    char name[20];
    char desig[20];
    float salary;
};
int main()
{
    union employee emp1;
    union employee emp2;
    union employee emp3;
    strcpy(emp1.name,"Ramu");
    strcpy(emp1.desig,"professor");
    emp1.salary=32000.70;

    strcpy(emp2.name,"sham");
    strcpy(emp2.desig,"doctor");
    emp2.salary=58000.5680;

    strcpy(emp3.name,"balu");
    strcpy(emp3.desig,"driverr");
    emp3.salary=15000.580;

  /*  printf("employee 1 details\n");
    printf("Name:%s\nDesignation:%s\nsalary:%s",emp1.name,emp1.desig,emp1.salary);

    printf("employee 2 details\n");
    printf("Name:%s\nDesignation:%s\nsalary:%s",emp2.name,emp2.desig,emp2.salary);

    printf("employee 3 details\n");
    printf("Name:%s\nDesignation:%s\nsalary:%s",emp3.name,emp3.desig,emp3.salary);*/

    printf("employee 1 details\n");
    printf("Name:%s\n",emp1.name);
    return 0;
}