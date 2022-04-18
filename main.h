#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

/**
* struct flags - struct containing flags to "turn on"
* when a flag specifier is passed to _printf()
* @plus: flag for the '+' character
* @space: flag for the ' ' character
* @hash: flag for the '#' character
*/
typedef struct flags
{
int plus;
int space;
int hash;
} flags_t;

int _printf(const char *format, ...);
int _putchar(char c);


#endif /* MAIN_H */
