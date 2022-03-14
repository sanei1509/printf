#include "main.h"

#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>

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
	{'\0', NULL}
	};

while (iterarr != 5)
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
	char *cadena = "csdiu";
	int t = 4;
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
	int iter;
	va_list parametros;

	va_start(parametros, format);
	if (format != NULL)
	{
	for (iter = 0; format[iter]; iter++)
	{
		if (format[iter] == '%' && format[iter + 1] != '%')
		{
			if (verifica(format[iter + 1]) == 1)
			{
				(*get_op_func(format[iter + 1]))(parametros);
				iter++;
			}
			else
				_putchar(format[iter]);
		}
		else if (format[iter] == '%' && format[iter + 1] == '%')
		{
			_putchar('%');
			iter++;
		}
		else
			_putchar(format[iter]);
	}
	}
	va_end(parametros);
	return (0);
}
