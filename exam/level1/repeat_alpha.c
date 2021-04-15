/*
======================================./1-0-repeat_alpha.txt====================
Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
================================================================================
*/

#include <io.h>

void write_repeat(char c, int n)
{
	for (int i = 0; i < n; i++)
	{
		write(1, &c, 1);
	}
}

int get_alpha_number(char c)
{
	int result = 1;
	if (c >= 'a' && c <= 'z')
		result += c - 'a';
	if (c >= 'A' && c <= 'Z')
		result += c - 'A';
	return result;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		while (*str)
		{
			write_repeat(*str, get_alpha_number(*str));
			str += 1;
		}
	}
	write(1, "\n", 1);
	return 0;
}
