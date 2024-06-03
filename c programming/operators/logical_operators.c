#include <stdio.h>
int main()
{
    int a = 0, b = 5, c = 10, result;
    /*result = 0 && 1;
    printf("%d", result);*/
    result = (a == b) && (c > b);
    printf("%d\n", result);
    result = (a == b) || (c > b);
    printf("%d\n", result);

    result = !a;
    printf("%d\n", result);





    return 0;
}