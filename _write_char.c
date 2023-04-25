#include "main.h"

/**
 * _write_char - This function writes the character c to stdout
 * @c: The character to print
 *
 * Return:	1 On success.
 *			-1 is returned on error.
 * code by Nancy and Yemsal
 */

int _write_char(char c)
{
	return (write(1, &c, 1));
}
