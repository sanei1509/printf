#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *rec_HEXA - function that gives you the hexa number
 *@num: user given number
 **/
void rec_HEXA(unsigned int num)
{
	int dif;

	if (num / 16)
	{
		rec_HEXA(num / 16);
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
		if (num % 16 > 9 && num % 16 <= 16)
		{
			dif = (num % 16) - 9;
			_putchar(dif + '@');
		}
		else
			_putchar(num % 16 + '0');

	}
}

/**
 *print_HEXA - function that prints the hexa number
 *@c: alias of the list of parameters
 *Return: iter + 1, total amount of chars
 **/

int print_HEXA(va_list c)
{
	long int num;
	unsigned int iter;

	iter = va_arg(c, unsigned int);

	rec_HEXA(iter);

	for (num = 0; iter / 16; num++)
	{
		iter = iter / 16;
	}
	return (num + 1);
}
/**
   *print_hexa_pointer - function that prints the hexa number
   *@n: alias of the list of parameters
   *Return: iter + 1, total amount of chars
   **/
int print_hexa_pointer(unsigned long n)
{
	long int num;

	rec_hexa(n);

	for (num = 0; n / 16; num++)
	{
		n = n / 16;
	}
	return (num + 1);
}
/**
 *print_pointer - prints pointer
 *@c: va_list
 *Return: int.
 **/
int print_pointer(va_list c)
{
	unsigned long i = va_arg(c, unsigned long);
	int num = 0;

	if (i == 0)
	{
		return (_printf("(nil)"));
	}

	num += _putchar('0');
	num += _putchar('x');
	num += print_hexa_pointer(i);
	return (num);
}
