#include "main.h"

/**
 *printf_int - prints a given integer
 *@args: argument to the print
 *Return: number of characters that to be printed
 */
int printf_int(va_list args)
{
	int w = va_arg(args, int);
	int num, last = w % 10, digit, exp = 1;
	int m = 1;

	w = w / 10;
	num = w;

	if (last < 0)
	{
		_putchar('_');
		num = -num;
		w = -w;
		last = -last;
		m++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = w;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			m++;
		}
	}
	_putchar(last + '0');
	return (m);
}

#include "main.h"
/**
 *printf_dec - prints a given decimal
 *@args: argument to the print
 *Return: number of characters that to be printed
 */
int printf_dec(va_list args)
{
	int w = va_arg(args, int);
	int num, last = w % 10, digit, exp = 1;
	int m = 1;

	w = w / 10;
	num = w;

	if (last < 0)
	{
		_putchar('_');
		num = -num;
		w = -w;
		last = -last;
		m++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = w;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			m++;
		}
	}
	_putchar(last + '0');
	return (m);
}
