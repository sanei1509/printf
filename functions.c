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
	int i, e;

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
int print_number(va_list a)
{
	unsigned int dec, count, i;
	int num = va_arg(a, int);

<<<<<<< HEAD
	if (num < 0)
	{
		_putchar('-');
		i = num * -1;
	}
	else
		i = num;
	dec = i;
	count = 1;
	while (dec > 9)
	{
		dec /= 10;
		dec /= 10;
	}
	for (; count >= 1; count /= 10)
		_putchar(((i / count) % 10) + '0');
	return (0);
=======
/**
*print_int_dec - print a int
*@i: receive int number
*/
void print_int_dec(va_list i)
{
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
	}
	}
>>>>>>> 44a4cb737b1633487720227feab9c0f966aca194
}
