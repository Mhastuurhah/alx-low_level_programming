#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase
 * Return: returns nothing
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	putchar('\n');
}
