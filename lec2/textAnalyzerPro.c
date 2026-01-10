#include <stdio.h>
#include <cs50.h>

int count_word(string text);

int main(void) {
	string text = get_string("Prompt: ");
	if (text[0] == '\0' || text == NULL) {
		printf("No input! Program Ends!\n");
		return 0;
	}
	printf("Text Analysis Report\n");
	printf("--------------------\n");

	return 0;
}

// int count_word(string text);  {

// }
