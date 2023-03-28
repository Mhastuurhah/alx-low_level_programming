#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: Nothing
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = size; i > 0; i--)
		{
			for (j = 0; j <= size; j++)
			{
				if (j >= i)
					_putchar('#');
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
