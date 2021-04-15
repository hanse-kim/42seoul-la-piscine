/*
======================================./2-0-reverse_bits.txt====================
Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0010  0110
	 ||
	 \/
 0110  0100
================================================================================
*/

unsigned char reverse_bits(unsigned char octet)
{
	return (octet & 128) >> 7 | (octet & 64) >> 5 | \
		(octet & 32) >> 3 | (octet & 16) >> 1 | \
		(octet & 8) << 1 | (octet & 4) << 3 | \
		(octet & 2) << 5 | (octet & 1) << 7;
}

#include <stdio.h>

int main(void)
{
	printf("%u\n", reverse_bits(255));
}
