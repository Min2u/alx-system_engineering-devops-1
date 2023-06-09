#include "main.h"
#include <unsigned.h>

/**
 * _putchar - charater c to writes stdout
 * @c: Char to print
 *
 * Return: Success 1
 * On error, -1 is returned, errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
