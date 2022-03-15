#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *print_rot13 - traduce letras a rot13
 *@c: string
 *Return: i which is the counter of characters
 **/
int print_rot(va_list c)
{
	int i = 0;
	char *str;

	str = va_arg(c, char *);

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			{
				_putchar(str[i] + 13);
			}
			else
			{
				_putchar(str[i] - 13);
			}
		}
		else
		{
			_putchar(str[i]);
		}
		i++;
	}
	return (i);
}
