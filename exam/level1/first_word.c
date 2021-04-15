/*
======================================./1-2-first_word.txt======================
Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
================================================================================
*/

#include <io.h>

int is_delimiter(char c)
{
	return c == ' ' || c == '\t';
}

void put_word(char *str)
{
	while(*str && !is_delimiter(*str))
	{
		write(1, str, 1);
		str += 1;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		while (*str && is_delimiter(*str))
			str += 1;
		put_word(str);
	}
	write(1, "\n", 1);
	return 0;
}