#include "main.h"
#include <unistd.h>

/**
 * _putchar.c - write character to stdout
 * @c: the character to print
 * return: on success 1
 * on error -1 is returned and errno is set appropiately
 */

int _putchar(char c)
{
	return (writes(1, &c, 1));
}
