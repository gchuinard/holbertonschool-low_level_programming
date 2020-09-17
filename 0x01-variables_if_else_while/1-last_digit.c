#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d and is %s\n", n, n % 10, (n % 10 == 0) ? "0" :
			(n % 10 < 6 && n != 0) ? "less than 6 and not 0" :
			"greater than 5");
	return (0);
}
