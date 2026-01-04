#include <stdio.h>
#include <stdbool.h>

float add(float num1, float num2){
	float sum = num1 + num2;
	return sum;
}

float sub(float num1, float num2){
	float difference = num1 - num2;
	return difference;
}

float multiplication(float num1, float num2) {
	float product = num1 * num2;
	return product;
}

float division(float num1, float num2) {
	float division = num1 / num2;
	return division;
}


int main() {
	float num1;
	float num2;
	int userInput;
	printf("\nWelcome to the legendary Calculator created by Arnav Sagar!!\n");

	while (true) {

		printf("\n1. Add\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
		printf("Enter your choice: ");
		scanf("%i", &userInput);
		if (userInput == 1) {
			printf("Enter the first number: ");
			scanf("%f", &num1);
			printf("Enter the second number: ");
			scanf("%f", &num2);
			printf("Sum: %0.2f\n", add(num1, num2));
		}
		else if (userInput == 2) {
			printf("Enter the first number: ");
			scanf("%f", &num1);
			printf("Enter the second number: ");
			scanf("%f", &num2);
			printf("Diffrence: %0.2f\n", sub(num1, num2));
		}
		else if (userInput == 3) {
			printf("Enter the first number: ");
			scanf("%f", &num1);
			printf("Enter the second number: ");
			scanf("%f", &num2);
			printf("Product: %0.2f\n", multiplication(num1, num2));
		}
		else if (userInput == 4) {
			printf("Enter the first number: ");
			scanf("%f", &num1);
			printf("Enter the second number: ");
			scanf("%f", &num2);
			if (num2 == 0) {
				printf("Error: Dividing any number with 0 results in error!!!\n");
			}
			else {
				printf("Division: %0.2f\n", division(num1, num2));
			}
		}
		else if (userInput == 5) {
			printf("You have exited the legendary calculator created by Arnav Sagar\n");
			break;
		}
		else {
			printf("Plese choose correct operation!\n");
		}
	}
	return 0;
}
