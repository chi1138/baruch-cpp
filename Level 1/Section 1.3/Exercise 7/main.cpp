#include <stdio.h>

int main()
{
    int num = 0, n = 0;
    printf("please enter a number:");
    scanf("%d", &num);
    printf("please enter the power to multiply:");
    scanf("%d", &n);
    
    num = num << (n-1);
    printf("the result is: %d\n", num);
    return 0;
}
