#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/*From here on below, the function prototypes*/

int _printf(const char *format, …);
int print_char(va_list prt);
int print_string(va_list ptr):
int print_number(va_list ptr);
int _strcmp(char *s1, char *s2);
#endif

