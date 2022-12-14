#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ones = '0';
	int tens = '0';
	int hundreds = '0';

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (ones = '0'; ones <= '9'; ones++)
			{
				putchar(hundreds);
				putchar(tens);
				putchar(ones);
				if (!(ones == '0' && hundreds == '7' &&
							tens == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
putchar('\n');
return (0);
}
