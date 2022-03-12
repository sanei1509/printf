/*librerías necesarias*/
#include <unistd.h>

/*funciones*/

/* _PUTCHAR */

/**
 * _putchar - escribe el caracter c al stdout
 * @c: el caracter a imprimir
 *
 * Return: caso exitoso 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(va_list c)
{
	return (write(1, &c, 1));
}

/** PRINT_STRING **/
/**
*print_string - print pointers
*@s:receive pointer
**/
void print_string(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
