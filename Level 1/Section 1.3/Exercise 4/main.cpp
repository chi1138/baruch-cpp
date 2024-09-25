#include <stdio.h>

int main()
{
    int married;
    married = 1;
    
    printf("Enter 0 for unmarried and 1 for married: ");
    scanf("%int", &married);
    
    printf("marriage status: %s", (married == 0) ? "unmarried" : "married");
    // can from comment:
    // can use printf(married ? "married" : "unmarried")
    // so there is no need to check (married == 0)
    return 0;
}
