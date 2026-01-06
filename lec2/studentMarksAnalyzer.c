// This program takes marks of n student and prints their average, highest marks, lowest marks and number of student that scored above average.
#include <stdio.h>
//#include <string.h>

int main(void)
{
	int num; // Number of students
	printf("Number of students: ");
	scanf("%d", &num);
	int scores[num];
	for (int i = 0; i > num; i++)
	{
		printf("Enter the %d's score: ", i);
		scanf("%d", scores[i]);
	}
	printf("%d %d %d %d %d", scores[0], scores[1], scores[2], scores[3], scores[4]);
	return 0;
}
