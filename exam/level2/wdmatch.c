/*
======================================./2-3-wdmatch.txt=========================
Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$
================================================================================
*/

#include <io.h>

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int is_vaild_str(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		while (*str2 && *str1 != *str2)
			str2 += 1;
		if (*str2)
			str2 += 1;
		str1 += 1;
	}
	return *str1 == '\0';
}

int main(int argc, char **argv)
{
	if (argc == 3)
		if (is_vaild_str(argv[1], argv[2]))
			ft_putstr(argv[1]);
	ft_putstr("\n");
	return 0;
}
