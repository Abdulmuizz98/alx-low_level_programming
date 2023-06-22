#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point to the keygen
 *
 * Return: Alway 0.
 */
int main(void)
{
	int sum = 0;
	char list[2772 / 97 + 1];
	char character;
	int i = 0, trial = 1;


	srand((unsigned int)time(NULL));
	while (sum != 2772)
	{
		if (sum > 2772)
		{
			trial++;
			sum = 0;
			i = 0;

				memset(list, '\0', sizeof(list));
		}
		character = (rand() % (122 - 97)) + 97;
		sum += character;
		list[i++] = character;
}
		printf("%s\n", list);

		return (0);
}
