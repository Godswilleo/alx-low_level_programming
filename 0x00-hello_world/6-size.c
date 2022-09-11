#include <stdio.h>

/**
* main - print sizes of datatype
* Return: 0
*
*/

int main(void)
{
	
	printf("Size of a char is: %zu", sizeof(char));
	printf(" byte(s)\n");

	printf("Size of an int is: %zu", sizeof(int));
	printf(" byte(s)\n");

	printf("Size of a long int is: %zu", sizeof(long int));
	printf(" byte(s)\n");

	printf("Size of a long long int is: %zu", sizeof(long long int));
	printf(" byte(s)\n");

	printf("Size of a float is: %zu", sizeof(float));
	printf(" bytes(s)\n");


	return (0);

}
