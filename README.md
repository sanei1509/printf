<img src="https://holbertonschool.uy/wp-content/themes/holberton/assets/img/logo.png">

# _Printf function 

Welcome, this is our **holberton school project**, the one that consisted of creating a small copy of the **printf** function with language C.

In simple words, the printf function prints a message on the screen using a **"format string"** that allows us to mix multiple strings in the final string to be displayed on the screen, but in case you want to see more in depth how it works I leave you these resources so you can investigate.

> Compilation
> 
> `$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`

## Format of printf function

````c
int _printf(const char *format, ...)

````
this is to see well what to pass to our function as parameters:
on one side the first parameter we send a string, where it receives any type (characters, integers, %s, etc) and on the other (...) we indicate the argument.

## Usage examples and return
input 
````c
    _printf("hola");
````
output
````c
    hola
````
input
````c
    int main(){
        int a = 120;
     _printf("I have %d dollars", a);
    }
````
   output
   

    I have 120 dollars

## *Resources of the original function*

 *- Libreria que permite usar la función*

> STDIO.H](https://www.tutorialspoint.com/c_standard_library/stdio_h.htm)**

*- man printf(3) explica a detalla el funcionamiento y uso de la función*
> man printf(3)
(https://man7.org/linux/man-pages/man3/printf.3.html)


# Format string or Conversor's
| Specifiers | Output | Example    |
| :---        |    :----:   |          ---: |
| **%c**    | `Character`    | h  |
| **%s**  | `String`       | Hello !!    |
|   **%d & %i** | `Signed Decimal Integer`   |   200|
| **%**  | `Print a % when we find %% inside the printf function`       | %      |
| **%r**   | `rot13 Hola`  | Ubyn    |

## Libraries used

````c
    #include <stddef.h>
    #include <stdarg.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
````

## Structure used
   ````c
    typedef struct type_t
    {
    char tipo;
    int (*f)(va_list a);
    } type_t_f;
````
## Functions that we used
````c
    int _putchar(char c);
    int print_char(va_list s);
    int print_string(va_list s);
    int print_number(va_list s);
    int print_number_ui(va_list i);
    int print_number1(int i);
    int print_Binary(va_list a);
    int print_rot(va_list ch);
````

## authors & github accounts
[Valentin repetto](https://github.com/valerepetto14)    |  [Santiago Neira](https://github.com/sanei1509] )    
