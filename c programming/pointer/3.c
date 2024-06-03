#include<stdio.h>
void plus5(int* a)
{
    *a = *a + 5;
    printf("a = %d\n", *a);
}

int main()
{

    int x = 10 ;
    plus5(&x);
    printf("x = %d", x);
    
    
    
    return 0;
}