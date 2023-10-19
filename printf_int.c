#include "main.h"

/**
 * printf_int - prints intiger number
 * @args: number arguements
 * @printed: the printed characters
 * Return: printed charcaters
 */

int printf_int(va_list args, int printed)
{
	int num = va_arg(args, int);
	int digits = 0;
	int temp = num;
	int Digit;

	if (num < 0)
	{
		printed += _putchar('-');
		num = -num;

		temp = num;
	}

	do {
		digits++;
		temp /= 10;
	} while (temp != 0);

	while (digits > 0)
	{
		int i, pow = 1;

		for (i = 1; i < digits; i++)
		{
			pow *= 10;
		}
		Digit = num / pow;
		printed += _putchar(Digit + '0');
		num -= Digit * pow;
		digits--;
	}
	return (printed);
}
