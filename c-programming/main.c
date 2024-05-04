#include <stdio.h>
#include <stdlib.h>

void greetings(char name[], int age);

int cube(int number);

int main() 
{
    double num1;
    double num2;
    int number; 
    int result;

    printf("Please enter the first number: ");
    scanf("%lf", &num1);


    printf("Please enter the second number: ");
    scanf("%lf", &num2);
    
    printf("the numbers adds: %f \n", num1 + num2);

    greetings("sergio", 21);
    
    printf("You gotta enter a number to apply a cube fn: \n");
    scanf("%d", &number);

    result = cube(number); 

    if (result != 0 )
    {
        printf("The cube is: %d \n", result);
    }else{
        printf("This should be a even number >:/");
    }
    return 0;
}

void greetings(char name[], int age)
{
    printf("Hello %s, your age is: %d\n", name, age);
}

int cube(int number)
{
   if (number % 2 == 0 )
   {
        return 0;
   }
    return number * number * number;
}
