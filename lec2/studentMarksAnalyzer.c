// This program takes marks of n student and prints their average, highest marks, lowest marks and number of student that scored above average.
// input - number of students, list of scores
// output - 

#include <stdio.h>

int average(int n, int list[]) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += list[i];
	}
	return sum / n;
}

int highest(int n, int list[]) {
	int highestNumber = list[0];
	for (int i = 0; i < n; i++) {
		if (list[i] > highestNumber) {
			highestNumber = list[i];
		}
	}
	return highestNumber;
}

int lowest(int n, int list[]) {
	int lowestNumber = list[0];
	for (int i = 0; i < n; i++) {
		if (list[i] < lowestNumber) {
			lowestNumber = list[i];
		}
	}
	return lowestNumber;
}

int main(void) {
	int num; // Number of students
	printf("Number of students: ");
	scanf("%d", &num);
	int scores[num];
	for (int i = 0; i < num; i++) {
		printf("Enter the %d's score: ", i + 1);
		scanf("%d", &scores[i]);
	}
	printf("Average: %d\n", average(num, scores));
	printf("Highest: %d\n", highest(num, scores));
	printf("Lowest:  %d\n", lowest(num, scores));
	return 0;
}
