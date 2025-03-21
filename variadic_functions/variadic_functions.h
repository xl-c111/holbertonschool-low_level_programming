#include <stdarg.h>
#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);


int _putchar(char c);

void print_char(va_list args);     
void print_float(va_list args);
void print_int(va_list args);
void print_str(va_list args);

void print_all(const char * const format, ...);

typedef struct print                       /* define a structure called print */ 
{
	char *specifier;                   /* first member: a pointer to a char str, is used to store format specifier*/
	void (*print_func)(va_list args);  /* second member: a func ptr, points to any func that matches the signature: */
                                                            /* takes a va_list argument and returns nothing */
} print_t;

#endif
