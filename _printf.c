#include "main.h"
#include <stddef.h>
#include <stdarg.h>
/**
*get_func - obtener funcion requerida
*@c: recibe char a buscar
*Return: pointer to a function
**/
int (*get_func(char c))(va_list a)
{
	/*inicializamos vars para recorrer*/
	int i;

	type_t_f search[] = {
	{"c", print_char},
	{"s", print_string},
	{"\0", NULL}
	};
/*comprobar el dato y en caso de exitencia de que si retornar la funcion */
	while (search[i])
	{
		if (c == search[i].type)
			return ((search[i].f));

		i++;
	}
	return (NULL);
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

	for (iter = 0; format[iter] != '\0'; iter++)
	{
		if (format[iter] == '%')
		{
			{
				if ((*get_func(format[iter + 1]))(parametros) == NULL)
				{
					_putchar(format[iter]);
					continue;
				}
				else
					(*get_func(format[iter + 1])(variable));
			}
		}
	}

		return (0);
}
