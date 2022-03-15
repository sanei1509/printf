#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *rec_oct - str
 *@num: char
 */
void rec_oct(unsigned int num)
{
	if (num / 8)
	{
		rec_oct(num / 8);
		_putchar(num % 8 + '0');
	}
	else
		_putchar(num % 8 + '0');
}

/**
 *print_octal - str
 * *@c: c
 * *Return: lenght
 * **/
int print_octal(va_list c)
{
	unsigned int num;
	int iter;

	num = va_arg(c, unsigned int);
	rec_oct(num);
	for (iter = 0; num / 8; iter++)
		num = num / 8;
	return (iter + 1);
}
