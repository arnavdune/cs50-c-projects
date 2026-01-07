// This program take string from user as input; and count the nubmer of vowels, consonants and Spaces.
// It is case insensitive ('A' and 'a' both count)

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	int vowels = 0;
	int consonants = 0;
	int spaces = 0;
	int numbers = 0;
	int otherChar = 0;

	string txt = get_string("Prompt: ");
	int total = strlen(txt);

	// Loop through each letter of the user input(txt)
	for (int i = 0; i < total; i++) {
		char c = tolower(txt[i]); // c is the lowercase of ith item of txt[];
		// Check if ' '
		if (c == ' ') {
			spaces++;
		}
		// Check if vowel
		else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
			vowels++;
		}
		// Check if consonant
		else if (c >= 'a' && c <= 'z') {
			consonants++;
		}
		// Check if number
		else if (c >= '0' && c <= '9') {
			numbers++;
		}
		// Check for other characters
		else {
			otherChar++;
		}		
	}
	// Prints out the result
	printf("Total: %d\n", total);
	printf("Vowels: %d\n", vowels);
	printf("Consonants: %d\n", consonants);
	printf("Numbers: %d\n", numbers);
	printf("Spaces: %d\n", spaces);
	printf("Other: %d\n", otherChar);
	printf("END\n");
	return 0;
}
