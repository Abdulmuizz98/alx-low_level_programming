#ifndef MAIN_H
#define MAIN_H
/**
 * struct list - singly linked list
 * @n: integer data
 * @next: pointer to the next node in the list
 *
 * Description: singly linked list for the bitwise tasks
 */
typedef struct list
{
	int n;
	struct list *next; 
} node;
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
#endif /* MAIN_H */
