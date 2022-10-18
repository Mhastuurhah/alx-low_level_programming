#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @num: accepts any integer number
 * Return: returns absolute value
 */

int _abs(int num)
{
	if (num < 0)
		return (num * -1);
	else if (num > 0)
		return (num);
	else
		return (0);
}
