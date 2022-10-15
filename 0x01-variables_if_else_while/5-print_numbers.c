#include <stdio.h>
/**
 * main - print all digits from 0 to 9
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		print("%d", num);

	print("\n");

	return (0);
}
