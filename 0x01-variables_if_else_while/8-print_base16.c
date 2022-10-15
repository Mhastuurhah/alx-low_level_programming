#include <stdio.h>

/**
 * main - Print numbers in base 16
 * Return: Always return 0
 */

int main(void)
{
	int num;
	char ch;

	for (num = 0; num <= 9; ++num)
	{
		putchar((num % 16) + '0');
	}
	for (ch = 'a'; ch <= 'f'; ++ch)
		putchar(ch);

	putchar('\n');
	return (0);
}
