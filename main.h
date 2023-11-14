#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 *@format - the argument used
 *@id: parameter used
 *@f: the other parameter
 */

typedef struct format
{
	char *id;
	int (*f)();
} given;

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
int printf_dec(va_list args);
int printf_int(va_list args);
int print_bin(va_list val);

#endif
