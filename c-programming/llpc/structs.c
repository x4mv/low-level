#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct person_t {
    char first_name[30];
    float income;
    bool isManager;
    char position[30];
};


int main(){


    
    struct person_t Samuel;
    strcpy(Samuel.first_name, "Sergio");
    Samuel.income = 125;
    Samuel.isManager = true;
    strcpy(Samuel.position, "Sergio");

    printf("name: %s\n", Samuel.first_name);
    printf("income: %f\n", Samuel.income);
    printf("isManager: %d\n", Samuel.isManager);
    printf("position: %s\n", Samuel.position);

    return 0;
}

   
