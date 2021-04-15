/*
======================================./2-0-union.txt===========================
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
================================================================================
*/

#include <io.h>

void print_union(char *str, int *printed)
{
	while (*str)
	{
		if (!printed[*str])
		{
			write(1, str, 1);
			printed[*str] = 1;
		}
		str += 1;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int printed[256] = {0, };
		char *str1 = argv[1];
		char *str2 = argv[2];
		print_union(str1, printed);
		print_union(str2, printed);
	}
}
