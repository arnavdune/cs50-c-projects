// This program take string from user as input; and count the nubmer of vowels, consonants and Spaces.
// It is space insensitive ('A' and 'a' both counts);

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	int vowels = 0;
	int consonants = 0;
	int spaces = 0;
	int otherChar = 0;

	const int vowelsList[10] = {65, 69, 73, 79, 85, 97, 101, 105, 111, 117};
	const int consonantsList[42] = {
	    // Uppercase consonants
	    66, 67, 68, 70, 71, 72, 74, 75, 76, 77, 78, 80, 81, 82, 83, 84, 86, 87, 88, 89, 90,
	    // Lowercase consonants
	    98, 99, 100, 102, 103, 104, 106, 107, 108, 109, 110, 112, 113, 114, 115, 116, 118, 119, 120, 121, 122
	};


	string txt = get_string("Prompt: ");

	for (int i = 0, n = strlen(txt); i < n; i++) {
		if (txt[i] == 32)
		{
			spaces++;
			continue;
		}
		for (int l = 0; l < 10; l++) {
			if (txt[i] == vowelsList[l]) {
				vowels++;
				continue;
			}
		}
		for (int l = 0; l < 42; l++) {
			if (txt[i] == consonantsList[l]) {
				consonants++;
				continue;
			}
		}
		otherChar++;
	}

	printf("Vowels: %d\n", vowels);
	printf("Consonants: %d\n", consonants);
	printf("Spaces: %d\n", spaces);
	printf("Other: %d\n", otherChar);
	printf("\n END \n");
	return 0;
}
