#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string prompt = get_string("Prompt: ");
    int wordCount = 1;
    int letterCount = 0;
    int frequency[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0, times = strlen(prompt); i < times; i++)
    {
        char letter = tolower(prompt[i]);
        if (letter == ' ')
        {
            wordCount++;
        }
        else if (isalpha(letter))
        {
            letterCount++;
            frequency[(letter - 97)]++; // if letter is a (ascii - 97) then it will increase the frequency[97 - 97] by one 
        }
    }
    // Results:-
    printf("Word count: %d\n", wordCount);
    printf("Letter count: %d\n", letterCount);
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