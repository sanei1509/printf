#ifndef _PRINTF_FUNCTION_H
#define _PRINTF_FUNCTION_H

#include <stddef.h>
#include <stdarg.h>

/*struct*/
typedef struct type_t 
{
char c;,
void (*f)(va_list)
}type_t_f;

/*prototypes*/
int _putchar(char c);
int print_char(va_list s);
void print_string(va_list s);
#endif
