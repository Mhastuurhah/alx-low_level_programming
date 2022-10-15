#include <stdio.h>

/**
 * main - prints alphabets backwards
 * in lower case
 * Return: Always return 0
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; --ch)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
