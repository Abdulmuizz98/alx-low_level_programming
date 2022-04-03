#include "main.h"
/**
 * print_chessboard - print a chessboard
 * @a: the chessboard representation to be printed
 *
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	i = j = 0;

	for (i = 0; i < 8; i++)
	{
		for(j = 0; j < 8; j++)
		{
			if (j == 0 && i != 0)
				_putchar('\n');
			
			_putchar(a[i][j]); 
		}
	}	
	return;
}
