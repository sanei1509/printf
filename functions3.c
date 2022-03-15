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

/**
 *rec_hexa - function that gives you the hexa number
 *@num: user given number
 **/
void rec_hexa(unsigned int num)
{
	int dif;

	if (num / 16)
	{
		rec_hexa(num / 16);
		if (num % 16 > 9 && num % 16 <= 16)
		{
			dif = (num % 16) - 9;
			_putchar(dif + '@');
		}
		else
			_putchar(num % 16 + '0');
	}
	else
	{
		if (num % 16 > 9 && num % 16 < 16)
		{
			dif = (num % 16) - 9;
			_putchar(dif + '@');
		}
		else
			_putchar(num % 16 + '0');

	}
}


/**
*print_hexa - str
*@num: c
*Return: lenght
**/
int print_hexa(va_list num)
{
	unsigned int n = va_arg(num, unsigned int);
	int iter;

	rec_hexa(n);
	for (iter = 0; n / 16; iter++)
		n = n / 16;
	return (iter + 1);
}
