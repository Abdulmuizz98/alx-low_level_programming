#include <stdio.h>
#include <string.h>

int chr_to_int(char chr)
{
	return (chr - 48);
}

char int_to_chr(int n)
{
	return (n + 48);
}


char *rev_str(char *str)
{
	char *p1, *p2;
	char temp;
	int i, len = strlen(str);

	p1 = str;
	p2 = p1 + len - 1;

	for(i = 0; i < len / 2; i++)
	{
		temp = *(p1 + i);
		*(p1 + i)= *(p2 - i);
		*(p2 - i) = temp;
	}

	return (str);
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_len = strlen(n1);
	int n2_len = strlen(n2);
	int i, j, k, res, carry = 0, remainder;
	memset(r, '\0',100);

	if (size_r  <= n1_len || size_r <= n2_len)
		return (0);

	for (i = n1_len - 1, j = n2_len - 1, k = 0; i >= 0 && j >= 0 ; i--, j--, k++ )
	{
		res = chr_to_int(*(n1 + i)) + chr_to_int(*(n2 + j)) + carry;
		remainder = res % 10;
		carry = res / 10;

		*(r + k) = int_to_chr(remainder);
	}

	if (n1_len > n2_len)
	{
		for(; i >= 0; i--, k++)
		{
			res = chr_to_int(*(n1 + i)) + carry;
			remainder = res % 10;
			carry = res / 10;

			*(r + k) = int_to_chr(remainder);
		}
	}
	else if (n1_len < n2_len)
	{
		for(; j >= 0; j--, k++)
		{
			res = chr_to_int(*(n2 + j)) + carry;
			remainder = res % 10;
			carry = res / 10;

			*(r + k) = int_to_chr(remainder);
		}
	}

	if (carry)
	{
		if (k + 1 >= size_r)
			return (0);
		*(r + k) = int_to_chr(carry);

	}
	return rev_str(r);
}
