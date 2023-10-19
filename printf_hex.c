#include "main.h"

/**
 * _x - prints a binary number
 * @num: number arguements
 * @printed: the printed characters
 * @upc: the uppercase equivalent
 * Return: printed charcaters
 */

int _x(unsigned int num, int printed, int upc)
{
	int hex[100], i = 0, j;

	while (num != 0)
	{
		int rem = num % 16;

		if (rem < 10)
		{
			hex[i] = 48 + rem;
		}
		else
		{
			if (upc)
			{
				hex[i] = 65 + (rem - 10);
			}
			else
			{
				hex[i] = 97 + (rem - 10);
			}
		}
		i++;
		num /= 16;
	}
	if (i == 0)
	{
		_putchar('0');
		printed++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(hex[j]);
			printed++;
		}
	}
	return (printed);
}
