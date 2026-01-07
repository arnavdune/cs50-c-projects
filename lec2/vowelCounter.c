// This program take string from user as input; and count the nubmer of vowels, consonants and Spaces.
// It is space insensitive ('A' and 'a' both counts);

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	int total = 0;
	int vowels = 0;
	int consonants = 0;
	int spaces = 0;
	int numbers = 0;
	int otherChar = 0;

	string txt = get_string("Prompt: ");

	for (int i = 0, n = strlen(txt); i < n; i++) {
		char c = tolower(txt[i]); // c is the ith item of txt[];
		if (c == ' ')
		{
			spaces++;
			total++;
		}
		else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
			vowels++;
			total++;

		}
		else if (c >= 'a' && c <= 'z') {
			consonants++;
			total++;
		}
		else if (c >= '0' && c <= '9') {
			numbers++;
			total++;
		}
		else {
			otherChar++;
			total++;
		}
		
	}
	printf("Total: %d\n", total);
	printf("Vowels: %d\n", vowels);
	printf("Consonants: %d\n", consonants);
	printf("Numbers: %d\n", numbers);
	printf("Spaces: %d\n", spaces);
	printf("Other: %d\n", otherChar);
	printf("\n END \n");
	return 0;
}
