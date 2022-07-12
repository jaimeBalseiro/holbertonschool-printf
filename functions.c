#include"main.h"


/**
 * print_string - A function that prints a string array.
 * @ptr:  Contains the values.
 * Return:  Void
 */
void print_string(va_list ptr)
{
        char *store;

        store = va_arg(ptr, char *); 
        {
                printf("%s", (store == NULL) ? "(nil)" : store);
                return NULL;
        }
}


/**
 * print_char - A function that prints a char.
 * @ptr:  Contains the values.
 * Return:  Void
 */
void print_char(va_list ptr)
{
        char store;

        store = va_arg(ptr, int);
        printf("%c", store);
}


/**
 * print_number - Converts integer to signed decimal notation.
 * @ptr:  Contains the values.
 * Return:  Void
 */
void print_number(va_list ptr)
{
        int store;

        store = va_arg(ptr, int);
        printf("%f", store);
}

