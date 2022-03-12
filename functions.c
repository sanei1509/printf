/*librerías necesarias*/
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

/*funciones*/

/* _PUTCHAR */

/**
 * _putchar - escribe el caracter c al stdout
 * @c: el caracter a imprimir
 *
 * Return: caso exitoso 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
	char r = va_arg(ch, char);

	return (_putchar(r));
}

/**
*print_string - print pointers
*@s:receive pointer
*/
void print_string(va_list s)
{
	char *null = "(nil)";
	char *str = va_arg(s, char *);
	int i, e;

	if (str == NULL)
	{
		for (e = 0, e < 5; i++)
			_putchar(null[i]);

		return;
	}
	/*printeamos caracter por caracter*/
	for (i = 0; str[i] != '\0'; i++)
	_putchar(str[i]);
}
