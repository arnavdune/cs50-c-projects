// This program take string from user as input; and count the nubmer of vowels, consonants and Spaces.
// It is space insensitive ('A' and 'a' both counts);

#include <stdio.h>

int main(void) {
	int n = 1000;
	char txt[n];
	fgets(txt, sizeof(txt), stdin);
	for (int i=0; i < n; i++) {
		printf("%c", txt[i]);
	}
	return 0;
}
