#include<stdio.h>

int summation(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}

int main()
{
    int a, b, sum;
    scanf("%d %d", &a, &b);
    sum = summation(a, b);
    printf("%d", sum);
    
    printf("%d", summation(10, 20));
    
    return 0;
}