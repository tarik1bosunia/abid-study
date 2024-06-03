#include <stdio.h>

int main()
{
    int a = 10;

loop:
    printf("courier korlam %d\n", a);
    a++;
    if(a < 20)
    {
         goto loop;
    }


    return 0;
}