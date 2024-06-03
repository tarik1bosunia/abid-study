#include <stdio.h>

int main()
{
    int a, b;
    float result;
    char operator;
    while(1)
    {

        scanf("%d %c %d", &a, &operator, & b);

        switch (operator)
        {

        case '+':
            result = a + b;
            break;

        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        
        default:
            printf("operation won't be allowed except =-*/ ");
        }

        printf("result = %f \n", result);
    }

    return 0;
}
