#include <stdio.h>

/**
 * premain - The execution of a function  before main
 * Return: Nothing
 */

void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

