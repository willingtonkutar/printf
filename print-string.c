#include "main.h"
/**
 *printf_string - prints a string
 *@val: argument used
 *Return: the stringht length
 */

int printf_string(va_list val)
{
	char *str;
	int m;
	int length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(NULL)";
		length = _strlen(str);
		for (m = 0; m < length ; m++)
			_putchar(str[m]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (m = 0; m < length ; m++)
			_putchar(str[m]);
		return (length);
	}
}
