#include "main.h"
/**
 * print_bin - prints the binary
 *@val: argument passed
 *Return: the integer
 *
 */

int print_bin(va_list val)
{
	int flem = 0;
	int count = 0;
	int i, m = 1, j;
	unsigned int numberr = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32 ; i++)
	{
		p = ((m << (32 - i)) & numberr);
		if (p >> (31 - i))
		       flem = 1;
		if (flem)
		{
			j = p >> (31 - i);
			_putchar(j + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
