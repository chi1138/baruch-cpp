#include <stdio.h>
int main()
{
    int x=1;
    int y=1;
    int z=1;
    
    x+=y+=x;
    // we have x = 3 and y = 2
    
    printf("%d\n\n", (x<y)?y:x);
    // x < y is false, so we print out the value for x
    
    printf("%d\n", (x<y)?x++:y++);
    // x < y is false, y++ is operated which is 2
    
    printf("%d\n", x);
    // the x value is not moved, so x is still 3
    
    printf("%d\n", y);
    // as y++ is performed before, y is now 3, so 3 is printed
    
    return 0;
}
