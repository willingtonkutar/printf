#include "main.h"
/**
 * printf - mimics the printf
 * @format: idintifier that looks for
 * Return: integer given
 */
int _printf(const char *format, ...)
{
	given m[] = {
		{"%c", printf_char}, {"%s", printf_string}, {"%%", print_37}, {"%d", printf_dec}, {"%i", printf_int}
	};

	va_list args;
	int g =  0, len = 0;
	int k;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[g] == '\0')
	{
		k = 5;
		while (k >= 0)
		{
			if (m[k].id[0] == format[g] && m[k].id[1] == format[g + 1])
			{
				len = len + m[k].f(args);
				g = g + 2;
				goto Here;
			}
			k--;
		}
		_putchar(format[g]);
		g++;
		len++;
	}
	va_end(args);
	return (len);
}
