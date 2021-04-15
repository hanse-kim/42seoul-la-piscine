/*
======================================./1-4-rotone.txt==========================
Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>
================================================================================
*/

#include <io.h>

void put_char(char c)
{
	write(1, &c, 1);
}

char rotone(char c)
{
	if ((c >= 'A' && c < 'Z') || (c >= 'a' && c < 'z'))
		c += 1;
	else if (c == 'Z')
		c = 'A';
	else if (c == 'z')
		c = 'a';
	return c;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		while(*str)
		{
			put_char(rotone(*str));
			str += 1;
		}
	}
	put_char('\n');
}