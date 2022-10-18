#include <stdio.h>
#include "main.h"

/**
 * main -Write a program that prints _putchar, followed by a new line.
 * _putchar - it holds my putchar function to print everything
 * Return: Always return 0
 */

int main(void)
{
	char *ch = "_putchar";

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
