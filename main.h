#ifndef _PRINTF_FUNCTION_H
#define _PRINTF_FUNCTION_H

#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/*STRUCT*/
/**
 *struct type_t - type_t_f
 *@tipo: character of conversors
 *@f: pointer to a function that we need
 */
typedef struct type_t
{
char tipo;
int (*f)(va_list a);
} type_t_f;

/*prototypes*/
int _putchar(char c);
int print_char(va_list s);
int print_string(va_list s);
int print_number(va_list s);
int print_numbers_normal(int n);
int print_number_ui(va_list i);

/*temporales*/
int output(int a, int b);

/*printf_prototype*/
int _printf(const char *format, ...);
#endif
