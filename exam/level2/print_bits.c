/*
======================================./2-4-print_bits.txt======================
Assignment name  : print_bits
Expected files   : print_bits.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010"
================================================================================
*/

#include <io.h>

void print_bits(unsigned char octet)
{
	write(1, octet & 128 ? "1" : "0", 1);
	write(1, octet & 64 ? "1" : "0", 1);
	write(1, octet & 32 ? "1" : "0", 1);
	write(1, octet & 16 ? "1" : "0", 1);
	write(1, octet & 8 ? "1" : "0", 1);
	write(1, octet & 4 ? "1" : "0", 1);
	write(1, octet & 2 ? "1" : "0", 1);
	write(1, octet & 1 ? "1" : "0", 1);
}

int main(void)
{
	print_bits(2);
	return 0;
}