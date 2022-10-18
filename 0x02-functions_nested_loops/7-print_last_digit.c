#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: accepts integer value number
 * Return: returns num
 */

int print_last_digit(int num)
{
	if (num < 0)
		_putchar(((num % 10) * -1) + '0');
	else
		_putchar((num % 10) + '0');

	return (num);
}
