/*
======================================./1-1-rot_13.txt==========================
Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>
================================================================================
*/

// abcdefghijklm
// nopqrstuvwxyz

#include <io.h>

void put_char(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		while (*str)
		{
			if ((*str >= 'A' && *str <= 'M') || (*str >= 'a' && *str <= 'm'))
				put_char(*str + 13);
			if ((*str >= 'N' && *str <= 'Z') || (*str >= 'n' && *str <= 'z'))
				put_char(*str - 13);
			else
				put_char(*str);
			str += 1;
		}
	}
	put_char('\n');
}