// Predict what is on the screen
#include <stdio.h>

#define PRD(a) printf("%d", (a)) // Print decimal
#define NL     printf("\n") // Print new line

int a[] = {0,1,2,3,4};

int main(){
    int i;
    int *p;

    // we loop i, which a[0] will get the first element of the array a
    for (i = 0; i <= 4; i++) PRD(a[i]); // 1: Prints 01234
    NL;
    
    // p = &a[0] the pointer p is set to the address of a[0]
    // *p is the dereference, we will print the thing pointed by p
    for (p = &a[0]; p <= &a[4]; p++) PRD(*p); // 2: Prints 01234
    NL;
    NL;

    for (p = &a[0], i = 0; i <= 4; i++) PRD(p[i]); // 3: Prints 01234
    NL;

    // when p is a pointer, p = a is same as p = &a[0]
    // also, *(p+i) is the same as p[i], which is dereferencing
    // as p + i will increment by 2, we will only have 0, 2, 4
    for (p = a, i = 0; p + i <= a + 4; p++, i++) PRD(*(p+i)); // 4: Prints 024
    NL;
    NL;

    // same logic as number 7
    for (p = a + 4; p >= a; p--) PRD(*p); // 5:43210
    NL;
    

    // p = a + 4 get the fourth entry (fifth element) of the array
    // p[0] will be the last element of the array (as we are doing backwards)
    // p[-1] will be the second to last, etc..
    for (p = a + 4, i = 0; i<= 4; i++) PRD(p[-i]); // 6 Prints 43210
    NL;

    // same as the last one for the logic of p = a + 4
    // p - a in the print statements will be 4 (in the beginning)
    // then as we loop through we will get 3,2,1,0
    // the input for a[4], a[3], ... will be
    for (p = a + 4; p >= a; p--) PRD(a[p-a]); // 7: Prints 43210
    NL;

    return 0;

}