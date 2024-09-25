#include <stdio.h>

int main()
{
    int ch = 0;
    int last_ch = 0;
    int ch_count = 0, word_count = 0, line_count = 0;
    
    printf("enter text :\n");

    do {
        ch = getchar();
        
        if (ch == '\n') {
            line_count++;
        }
        
        if (ch != '\n' && ch != '\t' && ch != 32 &&
            (last_ch == '\n' || last_ch == '\t' || last_ch == 32 || last_ch == 0)) {
            word_count++;
        }
        
        if (ch != 4 && ch != 26 && ch != EOF){
            ch_count++;
        }
        
        last_ch = ch;
    }
    while (ch != 4 && ch != 26 && ch != EOF);
    
    printf("\nthe amount of characters: %d\n", ch_count);
    printf("the amount of words: %d\n", word_count);
    printf("the amount of new lines: %d\n", line_count);
    
    return 0;
}
