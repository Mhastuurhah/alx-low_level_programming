#include <stdio.h>

/**
 * main - Using the putchar() function
 * Return: Always return 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
