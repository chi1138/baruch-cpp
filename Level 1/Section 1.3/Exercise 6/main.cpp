#include <stdio.h>

int main()
{
    int num = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    /*perform shift by 2*/
    num = num >> 2;

    printf("The number shifted is: %d \n", num);

    /*for signed integer, arithmetic shift is performed */
    /*for unsigned integer, logical shift is performed */
    if (num < 0) {
        printf("arithmetic shift performed (1 shifted in at left side)\n");
    } else {
        printf("logical shift performed (0 shifted in at left side)\n");
    }

    return 0;
}
