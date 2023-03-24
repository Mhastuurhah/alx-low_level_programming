#include <stdio.h>
#include "main.h"

/**
 * print_line - draw a straight line
 * @n: integer value
 * Return: returns nothing
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

