#include <stdio.h>

int main()
{
    int a, b, sum, minus;
   /* a = 10;
    b = 20; */
    scanf("%d %d", &a, &b );
 
    sum = a + b;
    printf("sum = %d\n", sum); 

    scanf("%d %d", &a, &b );
    minus = a - b;
    printf("minus = %d\n", minus); 

    
    float c, d, multiply, devide;
   /* a = 10;
    b = 20; */
    scanf("%f %f", &c, &d );
 
    multiply = c * d;
    printf("guun = %f\n", multiply); 

    scanf("%f %f", &a, &b );
    devide = c / d;
    printf("dhag = %f\n", devide);
    
    
    
    return 0;
}