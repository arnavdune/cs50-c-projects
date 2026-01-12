#include <stdio.h>
#include <cs50.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>



// Prototype
int count_word(string text);
int count_sentence(string text);
int count_letters(string text);

int main(void) {
	string text = get_string("Prompt: ");
	//toupper(text);

	if (text[0] == '\0' || text == NULL) {
		printf("No input! Program Ends!\n");
		return 0;
	}
	printf("Text Analysis Report\n");
	printf("--------------------\n");
	printf("Sentence:     %d\n", count_sentence(text));
	printf("Word:         %d\n", count_word(text));
	printf("Letters:      %d\n", count_letters(text));
	printf("\n");
	printf("Average Letter/Word:  %.2f\n", (float) count_letters(text) / count_word(text));

	return 0;
}

int count_letters(string text) {
	int numOfLetters = 0;
	for (long unsigned int i = 0; i < strlen(text); i++) {
		if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z')) {
			numOfLetters++;
		}
	}
	return numOfLetters;
}

int count_word(string text) {
	bool inWord = false;
	int numOfWord = 0;
	for (int i = 0, j = strlen(text); i < j; i++) {
		if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z')) // this check if the letter is between a - z or A - Z
		{
			if (!inWord) {
				inWord = true;
				numOfWord++;
			}
		}
		else {
			inWord = false;
		}
	}
	return numOfWord;
}

int count_sentence(string text) {
	int numOfSentence = 0;
	bool isNewSentence = false;
	for (int i = 0, n = strlen(text); i < n; i++) {
		if (isalpha(text[i])) {
			if (!isNewSentence) {
				isNewSentence = true;
			}
		}
		if ((text[i] == '.' || text[i] == '!' || text[i] == '?') && (isNewSentence == true)) {
				numOfSentence++;
				isNewSentence = false;
		}
	}

	return numOfSentence;
}
