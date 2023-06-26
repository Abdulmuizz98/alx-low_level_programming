#include <stdio.h>
#include <string.h>

/**
 * chr_to_int - Converts char to int.
 * @chr: the char to be converted
 *
 * Return: the resulting integer.
 */
int chr_to_int(char chr)
{
	return (chr - 48);
}

/**
 * int_to_chr - Converts int to char.
 * @n: the int to be converted
 *
 * Return: the resulting char.
 */
char int_to_chr(int n)
{
	return (n + 48);
}


/**
 * rev_str - Reverses a string.
 * @str: the str to be converted
 *
 * Return: the reversed string.
 */
char *rev_str(char *str)
{
	char *p1, *p2;
	char temp;
	int i, len = strlen(str);

	p1 = str;
	p2 = p1 + len - 1;

	for (i = 0; i < len / 2; i++)
	{
		temp = *(p1 + i);
		*(p1 + i) = *(p2 - i);
		*(p2 - i) = temp;
	}

	return (str);
}

/**
 * add_unparallel - Adds the front unparallel section of the
 * longer number.
 * @carry: the number carried forward
 * @n: the char array holding the larger number
 * @r: the char array to store the result
 * @index: the pointer to index of n to start addition from
 * @k: the pointer to the starting index of r to store the unparallel additions
 *
 * Return: the number to carry forward after unparallel add.
 */
int add_unparallel(int carry, char *n, char *r, int *index, int *k)
{
	int remainder, res;

	for (; *index >= 0; (*index)--, (*k)++)
	{
		res = chr_to_int(*(n + (*index))) + carry;
		remainder = res % 10;
		carry = res / 10;

		*(r + (*k)) = int_to_chr(remainder);
	}

	return (carry);
}


/**
 * infinite_add - Adds two numbers with each digit stored
 * as chars in a char array.
 * @n1: the char array storing first number.
 * @n2: the char array storing second number.
 * @r: the char array to store the result
 * @size_r: the size of array r
 *
 * Return: the char containing the result of add,
 * otherwise 0 if addition is impossible.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_len = strlen(n1);
	int n2_len = strlen(n2);
	int i, j, k, res, carry = 0, remainder;

	if (size_r  <= n1_len || size_r <= n2_len)
		return (0);

	memset(r, '\0', size_r);

	for (i = n1_len - 1, j = n2_len - 1, k = 0; i >= 0 && j >= 0 ; i--, j--, k++)
	{
		res = chr_to_int(*(n1 + i)) + chr_to_int(*(n2 + j)) + carry;
		remainder = res % 10;
		carry = res / 10;

		*(r + k) = int_to_chr(remainder);
	}

	if (n1_len > n2_len)
		carry = add_unparallel(carry, n1, r, &i, &k);
	else if (n1_len < n2_len)
		carry = add_unparallel(carry, n2, r, &j, &k);

	if (carry)
	{
		if (k + 1 >= size_r)
			return (0);
		*(r + k) = int_to_chr(carry);
	}
	return (rev_str(r));
}
