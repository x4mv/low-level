#include <stdio.h>
#include <string.h>
#include <stdbool.h>


struct Employee {
    char name[30];
    float income;
    bool isMAnager;
};

void new_employee(struct Employee *employee, char name[30], float income, bool isManager ){
    
    strcpy(employee->name, name);
    employee->income = income; 
    employee->isMAnager = isManager; 

    printf("Employee : %s created successfully\n", employee->name);

    return;
}

int main (){

    struct Employee Sergio;
    new_employee(&Sergio, "Sergio", 823.24, true);

    struct Employee Ivan;
    new_employee(&Ivan , "Ivan", 100, false);

    struct Employee Miguel;
    new_employee(&Miguel, "Miguel", 3823.24, true);
    
    return 0;
}
