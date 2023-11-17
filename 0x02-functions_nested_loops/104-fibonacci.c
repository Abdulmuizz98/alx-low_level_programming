#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#define DIV 1000000000
/**
 * main - prints the fib terms to 98
 *
 * Return: Nothing.
 */
int main(void)
{
	int n1 = 1;
	int n2 = 2;
	int rn1, rn2, tn1, tn2, sum, rsum, tsum, rem, trem;
	int i = 3;

	printf("1, 2,");
	rn1 = rn2 = tn1 = tn2 = 0;
	while (i <= 98)
	{
		rem = (n1 + n2) / DIV;
		sum = (n1 + n2) % DIV;
		rsum = rn1 + rn2 + rem;
		trem = (rn1 + rn2) / DIV;
		rsum = rsum % DIV;
		tsum = tn1 + tn2 + trem;

		n1 = n2;
		rn1 = rn2;
		tn1 = tn2;
		n2 = sum;
		rn2 = rsum;
		tn2 = tsum;

		if (tsum)
			printf(" %d%09d%09d", tsum, rsum, sum);
		else if (rsum)
			printf(" %d%09d", rsum, sum);
		else
			printf(" %d", sum);

		if (i < 98)
			putchar(',');
		else
		 putchar('\n');

		i++;
	}
	return (0);
}
