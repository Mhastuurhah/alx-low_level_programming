#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of the string
 * Description: returns string length
 * @s: char s
 * Return: j
 */

int _strlen(char *s)
{
	int j = 0;

	while (s[j])
		j++;

	return (j);
}
