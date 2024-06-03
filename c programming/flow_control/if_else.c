#include <stdio.h>
int main()
{
    int age;
    age = 17;

    if (age >= 18)
    {
        printf("you are eligible for vote\n");
    }
    else
    {
        printf("you are not eligible for vote\n");
    }

    int number1, number2;
    printf("\nEnter two integers: ");
    scanf("%d %d", &number1, &number2);
    
    if(number1 > number2)
    {
        printf("number1 is greater than number2");
    }
    else if (number1 == number2)
    {
        printf("number1 is equal to number2");
    }
    else 
    {
        printf("number1 is less than number2");
    }



    return 0;
}