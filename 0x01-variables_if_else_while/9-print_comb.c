#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 with commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 18; i < 28; i++)
	{
		putchar(i);
		if (i != 27)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
