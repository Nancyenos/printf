#include <unistd.h>
#include "main.h"
/**
 * _printarg - writes the character c to stdout
 * @c: pointer to character string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _printarg(char *c)
{
	return (write(1, c, _strlen(c)));
}
