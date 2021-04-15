/*
======================================./1-0-search_and_replace.txt==============
Assignment name  : search_and_replace
Expected files   : search_and_replace.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program called search_and_replace that takes 3 arguments, the first
arguments is a string in which to replace a letter (2nd argument) by
another one (3rd argument).

If the number of arguments is not 3, just display a newline.

If the second argument is not contained in the first one (the string)
then the program simply rewrites the string followed by a newline.

Examples:
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $
================================================================================
*/

#include <io.h>

int is_letter(char *str)
{
	return str[0] != '\0' && str[1] == '\0';
}

int main(int argc, char **argv)
{
	if (argc == 4 && is_letter(argv[2]) && is_letter(argv[3]))
	{
		char *str = argv[1];
		char from = argv[2][0];
		char to = argv[3][0];
		while (*str)
		{
			if (*str == from)
				write(1, &to, 1);
			else
				write(1, str, 1);
			str += 1;
		}
	}
	write(1, "\n", 1);
	return 0;
}
