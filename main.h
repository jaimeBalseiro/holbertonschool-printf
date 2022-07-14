#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/*Defined type structs*/

/**
* type - A struct function.
* 
* @data: The variable containing the 
*        left side letter in our
*        2d array structure.
* @f:    It points to the function on the right
*        side of  our 2d array structure.
*/
typedef struct type
{
        char data;
        int (*f)(va_list ptr);
} escoge_t;
/*Defined type structs end*/

/*From here on below, the function prototypes*/

int _printf(const char *format, ...);
int print_char(va_list prt);
int print_string(va_list ptr);
int print_number(va_list ptr);
int print_int(int n);
#endif
