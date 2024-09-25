#include <stdio.h>

int main()
{
    int ch = 0;
    int last_ch = 0;
    int ch_count = 0, word_count = 0, line_count = 0;
    
    printf("enter text :\n");

    do {
        ch = getchar();
        
        switch (ch) {
            case '\n':
                line_count++; break;
            case '\t':  // whitespace
            case ' ':   // ASCII 32
                break;
            default:
                if (last_ch == '\n' || last_ch == '\t' || last_ch == ' ' || last_ch == 0) {
                    word_count++;
                }
                break;
        }
        
        if (ch != 4 && ch != 26 && ch != EOF) {
            ch_count++;
        }
        
        last_ch = ch;

    } while (ch != 4 && ch != 26 && ch != EOF);

    printf("\nThe amount of characters: %d\n", ch_count);
    printf("The amount of words: %d\n", word_count);
    printf("The amount of new lines: %d\n", line_count);
    
    return 0;
}
