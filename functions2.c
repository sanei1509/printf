#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
*print_rot - rot13
*@ch: va_list
*Return: int
**/
int print_rot(va_list ch)
{
	int i;
	int a;
	char *cadena = va_arg(ch, char*);
	char *encode;
	char *decode;

	encode = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	decode = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	if (cadena == NULL)
	{
	for (i = 0; cadena[i] != '\0'; i++)
	{
		for (a = 0; a < 52; a++)
		{
			if (cadena[i] == encode[a])
			{
				_putchar(decode[a]);
				break;
			}
		}
	}
	else
		return (0);
	return (i);
	}
