#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int num = INT_MAX;
    int num_2 = INT_MIN;

    printf("%d\n", num_2);
    _printf("%d\n", num_2); 
    _printf("hola%\n");
    printf("%d\n", num);
    _printf("%d\n", num);
    _printf("Let's try to %%d printf a simple sentence.\n", 1024);

    _printf("Let's try to %d printf a simple sentence.\n", 213123);

    return (0);
}
