#include <stdio.h>

int main(void) {
	int age;
	char name[100];

	printf("Welcome to my Greeting app!!\n");
	printf("Enter your age: ");
	if (scanf("%d", &age) != 1)
	{
	    printf("Age cannot be empty or invalid.\n");
	    return 0;
	}
	getchar();
	printf("Enter your name: ");
	fgets(name, sizeof(name), stdin);

	if (name[0] != '\n')
	{
		if (age > 100 || age < 0) {
			printf("Invalid age!!\n");
		}
		else if (age > 0 && age < 13)
		{
			printf("Yo %s, You are %i years old\n", name, age);
		}
		else if (age > 13 && age < 18)
		{
			printf("Hey %s, You are %i years old\n", name, age);
		}
		else
		{
			printf("Hello sir/ma'am %s, You are %i years old\n", name, age);
		}

	}

	else
 	{
		printf("Error reading input\n");
	}
	return 0;
}
