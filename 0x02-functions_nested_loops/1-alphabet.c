#include <stdio.h>
#include "main.h"

/*
 * main - Write a function that prints the alphabet, in lowercase, followed by 
 * a new line
 * print_alphabet - prototype function
 * Return: Always return 0
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
