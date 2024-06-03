#include<stdio.h>


int main()
{
    
    // int a;
    // a = 118;
    // int arrey[5];
    // arrey[0] = 10;
    // arrey[1] = 11;
    // arrey[2] = 12;
    // arrey[3] = 13;
    // arrey[4] = 14;
    // printf("%d ", arrey [3] );
    // for(int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &arrey[i]);
    // }
    
    // for(int i = 4; i >= 0; i--)
    // {
    //     printf("%d ", arrey[i]);
    // }
    
        int a1 = 420;
    int a[] = {3, 4, 99, 99, 99, 96, 98888, 4949, 939595, 9349, 5};
    printf("%d\n", a[7]);

    printf("%d", sizeof(int));

    
    printf("%d", sizeof(a1));
    
    printf("%d", sizeof(a));
    
    printf("\nlength = %d", sizeof(a) / sizeof(a[0]));


    return 0;

}