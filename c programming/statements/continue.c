#include <stdio.h>

int main()
{
    for (int a = 1; a < 51; a = a + 1)
    {
        if (a % 2 == 0)
        {
            continue;
        }
        printf("%d ", a);
    }

    return 0;
}
