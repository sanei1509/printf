#include "main.h"
/**
*get_func - obtener funcion requerida
*@c: recibe char a buscar
*Return: pointer to a function
**/
int (*get_func(char c))(va_list)
{
	/*inicializamos vars para recorrer*/
	int i;

	types_t_f search[] = {
	{'c', printint},
	{'s', printstr},
	{'\0', NULL}
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
	va_list variable;

	va_start(parametros, format);
	for (iter = 0; format[iter] != '\0'; iter++)
	{
		if (format[i] == '%')
		{
			{
				if ((*get_func(format[iter + 1])(parametros)) == NULL)
				{
					_putchar(format[i]);
					continue;
				}
				else
					(*get_func(format[iter + 1])(variable));
			}
		}
	}
}
