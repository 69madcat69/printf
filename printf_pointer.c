#include "main.h"
#define Max_Hex 16

/**
 * printf_pointer - prints a binary number
 * @args: numberof arguements
 * @printed: the printed characters
 * Return: printed charcaters
 */

int printf_pointer(va_list args, int printed)
{
	void *ptr = va_arg(args, void*);
	unsigned long num = (unsigned long) ptr;
	int digits = 0, i;
	unsigned long temp = num;
	char hex_digits[Max_Hex] = "0123456789abcdef";
	char hex[Max_Hex];

	while (temp != 0)
	{
		digits++;
		temp /= 16;
	}

	printed += _putchar('0');
	printed += _putchar('x');

	if (num == 0)
	{
		printed += _putchar('0');
	}
	else
	{
		for (i = digits - 1; i >= 0; i--)
		{
			int digit = num % 16;

			hex[i] = hex_digits[digit];
			num /= 16;
		}
		for (i = 0; i < digits; i++)
		{
			printed += _putchar(hex[i]);
		}
	}
	return (printed);
}
