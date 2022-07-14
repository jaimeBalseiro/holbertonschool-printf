#include"main.h"

/**
 * print_string - A function that prints a string array.
 * @ptr:  Contains the values.
 * Return: The number of characters printed.
 */
void print_string(va_list ptr)
{
        char *store;
        int idx;
        store = va_arg(ptr, char *);

        for (idx = 0; store[idx] != '\0'; idx++)
                {
                        if (store[idx] == '\0')
                        {
                                return;
                        }
                        putchar(store[idx]);
                }
}


/**
 * print_char - A function that prints a char.
 * @ptr:  Contains the values.
 * Return: The number of characters printed. 
 */
void print_char(va_list ptr)
{
	char store;
	store = va_arg(ptr, int);
	
	if (store == '\0')
	{
		return;
	}
		putchar(store);
}


/**
 * print_number - Converts integer to signed decimal notation.
 * @ptr:  Contains the values.
 * Return: The number of characters printed.
 */
void print_number(va_list ptr)
{
        double store;

        store = va_arg(ptr, int);
        printf("%f", store);
}
