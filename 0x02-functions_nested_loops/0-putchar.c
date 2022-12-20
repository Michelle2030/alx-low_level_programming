#include "main.h"
/**
 * main -  prints _putchar, followed by a new line.
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char text[] = "_putchar";

	while (text[i] != '\0')
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
