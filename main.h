#ifndef _PRINTF_FUNCTION_H
#define _PRINTF_FUNCTION_H

#include <stddef.h>
#include <stdarg.h>

/*struct*/
typedef struct type_t 
{
char tipo;
int (*f)(va_list a);
}type_t_f;

/*prototypes*/
int print_char(va_list s);
int print_string(va_list s);
int _putchar(char c);

/*printf_prototype*/
int _printf(const char *format, ...);
#endif
