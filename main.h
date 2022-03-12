#ifndef _PRINTF_FUNCTION_H
#define _PRINTF_FUNCTION_H

#include <stddef.h>
#include <stdarg.h>

/*struct*/
typedef struct type_t 
{
char c;
int (*f)(va_list);
}type_t_f;

/*prototypes*/
int print_char(va_list s);
int print_string(va_list *s);

/*printf_prototype*/
int _printf(const char *format, ...);
#endif
