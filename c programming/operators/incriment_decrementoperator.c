#include <stdio.h>
int main()            
{
    int x = 10;
    // ++x; // x = x+1
    printf("%d", x++);
    printf("%d", ++x);
    printf("%d", x++);
    printf("%d", x);
    printf("%d", x);
    return 0;
}