#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/**
 *_printf - printear algo
 *@format: formato
 *Return: number of characters
 **/
int _printf(const char *format, ...)
{
	int iter;
	int iterarr = 0;
	va_list parametros;

	type_t_f search[] = {
	{'c', print_char},
	{'s', print_string},
	{'d', print_number},
	{'u', print_number},
	{'\0', NULL}
	};

	va_start(parametros, format);

	for (iter = 0; format[iter]; iter++)
	{
		iterarr = 0;
		if (format[iter] == '%' && format[iter + 1] == '\0')
			return (0);
		if (format[iter] == '%' && format[iter + 1] != '%')
		{
			while (iterarr != 4)
			{
				if (search[iterarr].tipo == format[iter + 1])
				{
					search[iterarr].f(parametros);
					iter++;
					break;
				}
				else
				iterarr++;
			}
			if (iterarr == 3 && format[iter] == '%')
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
		va_end(parametros);
		return (0);
}
