#include <stdio.h>

int main()
{
	int input;
	int result;
	printf("Enter an integer number:\n");
	/*Must use the % operator to signify the use of a variable*/
	/*Also var input needs to have the & operator before its declaraction in order to write an int value to its location in memory*/
	scanf("%d", &input);
	
	result = input % 2;

    /*Must use a boolean operator == NOT an assignment operator*/
	if (result == 0) {
		printf ("\nNumber %d is even.\n", input);
	}
	else if (result != 0) {
		printf("\nNumber %d is odd.\n", input);
	}

	/*Does not return an int*/
	return 0;
}