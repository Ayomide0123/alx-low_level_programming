#include <stdio.h>

/**
 * main - Entry point
 * author: Ayomide0123
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ayo;

	for (ayo = 'z'; ayo >= 'a'; ayo--)
		putchar(ayo);
	putchar('\n');
	return (0);
}
