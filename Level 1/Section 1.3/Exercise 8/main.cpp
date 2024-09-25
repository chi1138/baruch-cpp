#include <stdio.h>

int main()
{
    int x=2;
    int y;
    int z;
    
    x*=3+2;
    printf("x=%d\n", x);
    /* same as x = x * (3 + 2)*/
    /* result is x = 10*/
    
    x*=y=z=4;
    printf("x=%d\n", x);
    /* same as x = x * (y = z = 4)*/
    /* result is x = 40*/
    
    x=y==z;
    printf("x=%d\n", x);
    return 0;
    /* y == z is true, x = 1 (as 1 is true)*/
    /* result is x = 1*/

}
