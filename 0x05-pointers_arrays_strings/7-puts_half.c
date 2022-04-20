#include "main.h"
/**
 *puts_half - prints half of a string.
 *@str: pointer to string.
 *
 *Return: void.
 */
void puts_half(char *str)
{
	int n, len, mid;

	length = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		mid = len / 2;
		for (n = mid; n < len; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		mid = (len - 1) / 2;
		for (n = mid + 1; n < len; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
