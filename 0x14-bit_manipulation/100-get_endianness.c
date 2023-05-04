#include "main.h"

/**
* get_endianness - does the check
*
* Return: If big-endian - 0.
*/

int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;
	
	if (*endiann == 1)
		return (1);

	return (0);
}
