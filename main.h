#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>


/**
 * struct print - Checks what flags need to be turned on
 * @t: the type to be printed
 * @f: the function to print
 */

typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);


#endif
