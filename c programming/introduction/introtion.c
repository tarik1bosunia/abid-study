#include <stdio.h>

int main()
{
    printf("hello abid\n");
    printf("i knew you were the killer\n");

    int a;
    a = 25;

   /* printf("%d\n", a);
    a = 100; */
    printf("%d\n", a); 

    int x;
    x = 200;
    // printf("%d\n", x);

    printf("%d\n%d\n", a , x );

    float b;
    b = 10.0003;
    printf("%.5f\n", b); 
    double c;
    c = 25.09909999000099;
    printf("%.15lf\n", c); 

    printf("size of a = %d\n", sizeof(a) ); 
    printf("%d\n", sizeof(int) ); 
    printf("size of b = %d\n", sizeof(b) ); 
    printf("size of c = %d\n", sizeof(c) ); 


long long int g;
g = 1888888888888888889;
    printf("g = %lld\n", g ); 
    printf("size of g = %d\n", sizeof(g) ); 
    
long double f;
f = 100000.9389839899;
printf("%.12Lf\n", f ); 
printf("size of f = %d\n", sizeof(f) ); 










    return 0;
}




