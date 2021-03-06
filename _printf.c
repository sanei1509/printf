#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <math.h>
#include <string.h>

/**
*get_op_func - retornar funcion
*@s: formato
*Return: puntero a funcion
**/
int (*get_op_func(char s))(va_list)
{
int iterarr = 0;
type_t_f search[] = {
	{'c', print_char},
	{'s', print_string},
	{'d', print_number},
	{'i', print_number},
	{'u', print_number_ui},
	{'R', print_rot},
	{'r', print_rev},
	{'b', print_binary},
	{'o', print_octal},
	{'x', print_hexa},
	{'X', print_HEXA},
	{'p', print_pointer},
	{'\0', NULL},
	};

while (iterarr != 13)
{
	if (search[iterarr].tipo == s)
	{
		return (search[iterarr].f);
	}
	else
	{
		iterarr++;
	}
}
	return (NULL);

}

/**
 *verifica - valida antes de correr
 *@c: cadena con conversores
 *Return: 0
 */
int verifica(char c)
{
	char *cadena = "csdiRurboxXp";
	int t = 11;
	int i = 0;

	while (i <= t)
	{
		if (cadena[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
*_printf - printear algo
*@format: formato
*Return: number of characters
**/

int _printf(const char *format, ...)
{
	int num_characters = 0, iter = 0;
	va_list parametros;

	va_start(parametros, format);

	if (format != NULL)
	{
		for (iter = 0; format[iter]; iter++)
		{
			if (format[iter] == '%' && format[iter + 1] != '%'
					&& format[iter + 1] != '\0')
			{
				if (verifica(format[iter + 1]) == 1)
				{
					num_characters += (*get_op_func(format[iter + 1]))(parametros);
					iter++;
					/*continue;*/
				}
				else
					_putchar(format[iter]), num_characters++;
			}
			else if (format[iter] == '%' && format[iter + 1] == '%')
				_putchar('%'), iter++, num_characters++;
			else if (format[iter + 1] == '\0' && format[iter] == '%')
			{
				return (-1);
			}
			else
				_putchar(format[iter]), num_characters++;
		}
	}
	else
	return (-1);

	return (num_characters);
	va_end(parametros);
}
