#include <stdio.h>

void checkprimenumber()
{
    int number, is_prime = 1;
    scanf("%d", &number);


    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            is_prime = 0;
            break;
        }
    }

    if(number != 0 && number != 1 && is_prime == 1)
    {
        printf("prime");
    }

else
{
    printf("not prime");
}

}

int main()
{

    checkprimenumber();
    return 0;
}