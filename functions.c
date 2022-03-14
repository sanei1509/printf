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
	char *str = va_arg(s, char*);
	int i;

	if (!(*str == '\0'))
	{
	/*printeamos caracter por caracter*/
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	}
	return (0);
}

/**
*print_int_dec - print a int
*@i: receive int number
*/

int print_number(va_list i)
{
	int count = 0;
	int n = va_arg(i, int);
	unsigned int dc, dig, nat = n;
	double f = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			nat = n * -1;
			_putchar('-');
		}

	while (f <= nat)
		f *= 10;
	dc = f / 10;

	while (dc >= 1)
	{
		dig = nat / dc;
		_putchar(dig + '0');
		nat = (nat - (dc * dig));
		dc /= 10;
		count++;
	}
	}
	return (count);

}

/**
int casenull(char s)
{
	printf("%c",s);
	return (0);
}
**/
