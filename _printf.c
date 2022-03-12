#include "main.h"
#include <stddef.h>
#include <stdarg.h>
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
	{'\0', NULL}
	};

	va_start(parametros, format);

	for (iter = 0; format[iter]; iter++)
	{
		iterarr = 0;
		if (format[iter] == '%')
		{
			while (iter != 3)
			{
				if (search[iterarr].tipo == format[iter])
				{
					search[iterarr].f(parametros);
					continue;
				}
				iterarr++;
			}
		}
		else
		{
		_putchar(format[iter]);
		iter++;
		}
	}

		return (0);
}
