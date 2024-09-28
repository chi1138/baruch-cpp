#include <stdio.h>

int main()
{
    int c = 0; // The input characters

	FILE* fp;  // Implement FIle handles

	fp = fopen("Exercise2.txt", "w");  // Mode w for write (create one if not existed)

	printf("Please enter your characters and press ENTER to display. Press ^A to end.\n");

	while ((c = getchar()) != 1) {
		fputc(c, fp);  // Write things to the file
	}

	printf("CTRL + A is a correct ending.\n"); // Display final messege

	fclose(fp);  // Close file

	return 0;
}