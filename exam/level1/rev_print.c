/*
======================================./1-3-rev_print.txt=======================
Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$
================================================================================
*/

#include <io.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i += 1;
	return i;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int i = ft_strlen(argv[1]) - 1;
		while (i >= 0)
		{
			write(1, &str[i], 1);
			i -= 1;
		}
	}
	write(1, "\n", 1);
	return 0;
}
