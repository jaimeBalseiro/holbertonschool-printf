#include "main.h"

/**
 * _printf -A Function that produces output according
 *          to a format.
 *
 * @format: A pointer string array that will contain
 *          the parameters passed into the function.
 *
 * Return: The number of characters that are printed.
 */

int _printf(const char *format, ...)
{
	int idx, idx2, count = 0;
	va_list ptr;

	escoge_t este[] = {
		{'c', print_char},
		{'s', print_string}
		/*
		 *{'d', print_number},
		 *{'i', print_number},
		 */
	};

	va_start(ptr, format);
	
	if (ptr == NULL || format == NULL)
	{
		return (-1);
	}
	
	for (idx = 0; format[idx] != '\0'; idx++)
	{
		if(format[idx] != '%')
		{
			putchar(format[idx]);
			count++;
		}
		if (format[idx] == '%')
		{
			if(format[idx + 1] == '%')
			{
				putchar('%');
				idx++;
				count++;
			}
			for (idx2 = 0; idx2 < 2; idx2++)
			{
				if (format[idx + 1] == este[idx2].data)
				{
					este[idx2].f(ptr);
					idx++;
					count++;
				}
			}
		}
	}
va_end(ptr);
return (count);
}
