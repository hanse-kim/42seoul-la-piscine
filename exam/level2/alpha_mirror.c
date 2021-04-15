/*
======================================./2-1-alpha_mirror.txt====================
Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>
================================================================================
*/

#include <io.h>

char mirror_char(char c)
{
	if (c >= 'A' && c <= 'M')
		return 'N' + ('M' - c);
	if (c >= 'a' && c <= 'm')
		return 'n' + ('m' - c);
	if (c >= 'N' && c <= 'Z')
		return 'M' - (c - 'N');
	if (c >= 'n' && c <= 'z')
		return 'm' - (c - 'n');
	return c;
}

void put_char(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		while(*str)
		{
			put_char(mirror_char(*str));
			str += 1;
		}
	}
}
