#include <stdio.h>

void print_number(int i);


int main(){
    print_number(-123940234);
    return 0;
}

void print_number(int i){

    if (i < 0){
        i *= -1;
        putchar('-');
    }

	if ((i / 10) != 0) {
		print_number((i / 10)); // the recursive part
		putchar('0' + (i % 10)); 
	} else {
		putchar('0' + i);
    }
}