#include <stdio.h>

/**
 * main - Entry point
 * author:Ayomide0123
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ayo;

	for (ayo = 48; ayo < 58; ayo++)
	{
		putchar(ayo);
		if (ayo != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
