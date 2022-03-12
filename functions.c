/*librerías necesarias*/
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include "main.h"

/*funciones*/

/* PRINT_CHAR */

/* PRINT_STRING */

/**
*print_char - writes the character c to stdout
* @ch: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int print_char(va_list ch)
{
	char a = va_arg(ch, int);

	_putchar(a);
	return (1);
}

/**
*print_string - print pointers
*@s:receive pointer
*Return: 1;
*/
int print_string(va_list s)
{
	char *null = "(nil)";
	char *str = va_arg(s, char*);
	int i, e;

	if (*str == '\0')
	{
		for (e = 0; e < 5; e++)
			_putchar(null[e]);

		return (0);
	}
	else
	{
	/*printeamos caracter por caracter*/
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (0);
	}
}

