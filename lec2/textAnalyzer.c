#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    string prompt = get_string("Prompt: ");
    if (prompt == NULL || prompt[0] == '\0') {
        printf("Empty input. Program ended.\n");
        return 1;
    }
    int spaceCount = 0;
    int wordCount = 0;
    bool inWord = false;
    int letterCount = 0;
    int frequency[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0, times = strlen(prompt); i < times; i++)
    {
        char letter = tolower(prompt[i]);

        if (isalpha(letter))
        {
            letterCount++;
            frequency[letter - 'a']++; // if letter is a (ascii - 97) then it will increase the frequency[97 - 97] by one
            if (!inWord)
            {
                wordCount++;
                inWord = true;
            }
        }
        else {
            inWord = false;
            if (letter == ' ')
            {
                spaceCount++;
            }
        }
    }

    // Results:-
    printf("Word count: %d\n", wordCount);
    printf("Letter count: %d\n", letterCount);
    printf("Space count: %d\n", spaceCount);
    printf("Letter Frequency:- \n");
    for (int i = 0; i < 26; i++)
    {
        printf("\t%c: %d", (i + 65), frequency[i]);
        if (i == 12)
        {
            printf("\n");
        }
    }
    return 0;
}
