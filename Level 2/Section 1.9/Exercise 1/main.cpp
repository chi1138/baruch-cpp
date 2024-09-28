#include <stdio.h>

int main(){

    // Initialize an integer a for input
    int a;

    printf("Please enter your characters and press ENTER to display. Press ^A to end.\n");

    //^A has an ASCII value of 1
    while ((a = getchar()) != 1)
    {
        putchar(a); // Enter the messege
    }
    
    printf("CTRL + A is a correct ending.\n"); // Display the final messege

    return 0;
}