#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: accepts integer value number
 * Return: returns num
 */

int print_last_digit(int num)
{
	int p_num;

	p_num = num % 10;
	if (num < 0)
		p_num = p_num * -1;

	_putchar(p_num + '0');
	return (p_num);
}
