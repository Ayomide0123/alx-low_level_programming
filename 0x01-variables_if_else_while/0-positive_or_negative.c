#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 * Author: Ayomide0123
 * Date: 08-09-2023
 * Details: c program to print -ve, zero and -ve results of a random number
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
