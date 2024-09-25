#include <stdio.h>

int main(){
    int num;
    int count_0 = 0, count_1 = 0, count_2 = 0, count_3 = 0, count_4 = 0;
    
    printf("Please enter numbers from 0 to 4 \n");
    while ((num = getchar()) != EOF) {
        if (num == '0') {
            count_0++;
        }
        if (num == '1') {
            count_1++;
        }
        if (num == '2') {
            count_2++;
        }
        if (num == '3') {
            count_3++;
        }
        if (num == '4') {
            count_4++;
        }
    }
    
    printf("Number of 0: %d\n", count_0);
    printf("Number of 1: %d\n", count_1);
    printf("Number of 2: %d\n", count_2);
    printf("Number of 3: %d\n", count_3);
    printf("Number of 4: %d\n", count_4);
    
    return 0;
}
