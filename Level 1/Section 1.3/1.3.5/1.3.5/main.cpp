#include <stdio.h>

int main()
{
    int val, res_1, res_2;
    val = 10;
    
    res_1 = --val;
    
    printf("the result for --val is:\n");
    printf("original value: %d\n", val);
    printf("new value: %d\n", res_1);

    val = 10;
    res_2 = val--;
    
    printf("\nthe result for val-- is:\n");
    printf("original value: %d\n", val);
    printf("new value: %d\n", res_2);

}
