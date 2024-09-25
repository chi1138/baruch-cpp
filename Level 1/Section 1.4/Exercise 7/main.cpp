#include <stdio.h>

int main() {
    int num;
    int count_0 = 0, count_1 = 0, count_2 = 0, count_3 = 0, count_4 = 0;

    printf("Please enter numbers from 0 to 4:\n");

    while ((num = getchar()) != EOF) {
        switch (num) {
            case '0':
                count_0++;
                break;
            case '1':
                count_1++;
                break;
            case '2':
                count_2++;
                break;
            case '3':
                count_3++;
                break;
            case '4':
                count_4++;
                break;
            default:
                break;
        }
    }

    switch (count_3) {
        case 0:
            printf("\nNumer three appears zero times\n");
            break;
        case 1:
            printf("\nNumber three appears once\n");
            break;
        case 2:
            printf("\nNumber three appears two times\n");
            break;
            
        default:
            printf("\nNumber three appears more than two times\n");
            break;
    }

    return 0;
}
