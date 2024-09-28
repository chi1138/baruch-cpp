#include <stdio.h>

// define the function, use void as we work with memery directly
void Swap(int *a , int *b){
    int temp_a = *a;
    *a = *b;
    *b = temp_a;
}

int main(){
    int i = 123;
    int j = 456;

    printf("Before swap: i = %i and j = %i\n", i, j);

    // call the swap funciton to swap
    Swap(&i, &j);

    // show the result after swap
    printf("After swap: i = %i and j = %i\n", i, j);

    return 0;
}