#include <stdio.h>

/**
 * main - Using putchar function to print numbers
 * Return: Always return 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; ++num)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');
	return (0);
}
