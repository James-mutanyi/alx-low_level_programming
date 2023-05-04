#include "main.h"
/**
 * clear_bit - index cleared to zero
 * @n: integer to pass
 * @index: index to go to
 * Return: returns integer value
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	(*n) &= ~(1 << index);

	if (get_bit((*n), index) == 0)
		return (1);
	return (-1);
}
