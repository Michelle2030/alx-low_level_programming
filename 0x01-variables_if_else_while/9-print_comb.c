#include <stdio.h>
/**
 * main
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 20; i++)
	{
		putchar((i % 10) + '0');
		if (i != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
