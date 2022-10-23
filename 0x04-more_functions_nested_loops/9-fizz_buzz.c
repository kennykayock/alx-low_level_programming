#include <stdio.h>

/**
 * main - print fizzbuzz
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		print(" ");
		if (n % 3 == 0)
			printf("Fizz");
		if (n % 5 == 0)
			printf("Buzz");
		if (n % 3 != 0 && n % 5 != 0)
			printf("%d", n);
	}
	printf("\n");
	return (0);
}
