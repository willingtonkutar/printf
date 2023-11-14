#include "main.h"

/**
 *_strlen - gives the length of a string
 *@str: pointer to a string
 *Return: 1
 *
 */

int _strlen(char *str)
{
	int j;

	for (j = 0 ; str[j] != 0 ; j++)
	return (j);
}
/**
 * _strlenc - same asstrlen function but applied as constant char pointer str
 * @str: pointer to char
 * Return: 1
 */

int _strlenc(const char *str)
{
	int m;

	for (m = 0 ; str[m] != 0 ; m++)
	return (m);
}
