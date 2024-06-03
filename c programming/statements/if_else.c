#include <stdio.h>

int main()
{
    float a, b, result;
    int isInvalid = 0;
    char operator;
    scanf("%f %c %f", &a, &operator, &b);
    
    if(operator == '+')
    {
        result = a + b;
    }
    else if(operator == '-')
    {
        result = a - b;
    }
    else if( operator == '*')
    {
        result = a * b;
    }
    else if (operator == '/')
    {
        result = a / b;
    }
    else{
        isInvalid = 1;
        printf("invalid operation");
    }

    if( isInvalid == 0 ) printf("%f ", result);


    return 0;
}