#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiplication of two integers
 * @argc: Count the arguments
 * @argv: Arguments vector
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoid(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
