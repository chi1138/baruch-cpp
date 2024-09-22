#include <stdio.h>

int main()
{
    int married;
    married = 1;
    
    printf("Enter 0 for unmarried and 1 for married: ");
    scanf("%int", &married);
    
    printf("marriage status: %s", (married == 0) ? "unmarried" : "married");
    return 0;
}
