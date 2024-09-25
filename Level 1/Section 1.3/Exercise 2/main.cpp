#include <stdio.h>

int main()
{
    float base, height, area;
    base = 0;
    height = 0;
    area = 0;
    
    printf("Enter base value: ");
    scanf("%f", &base);
    
    printf("Enter height value: ");
    scanf("%f", &height);
    
    area = 0.5 * height * base;
    printf("The area is: %.2f \n", area);
    
    return 0;
    
}
 
