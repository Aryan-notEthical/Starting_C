#include<stdio.h>

int main(){

    int id;
    char name[] = "";

    struct EmployeeData{
        int EmployeeId;
        int EmployeeSalary;
        char EmployeeName[];
    };

    struct EmployeeData e;


    printf("----------Author - x64_exploi0r---------- \n");
    printf("Enter the Employee Id: ");
    scanf("%d",&e.EmployeeId);

    printf("Enter the Employee name: ");
    scanf("%s",&e.EmployeeName);

    printf("Employee name: \t %s \n",e.EmployeeName);
    printf("Employee Id:   \t %d \n",e.EmployeeId);
    
    
    
    
}