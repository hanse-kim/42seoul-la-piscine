/*
======================================./2-0-last_word.txt=======================
Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
================================================================================
*/

#include <io.h>
#include <stdio.h>

int is_delimiter(char c)
{
	return c == ' ' || c == '\t';
}

void put_word(char *str)
{
	while (*str && !is_delimiter(*str))
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
		int i = 0;
		int word_index = -1;
		while (str[i])
		{
			while (str[i] && is_delimiter(str[i]))
				i += 1;
			if (str[i] && !is_delimiter(str[i]))
			{
				word_index = i;
				while (str[i] && !is_delimiter(str[i]))
					i += 1;
			}
		}
		if (word_index != -1)
			put_word(str + word_index);
	}
	write(1, "\n", 1);
}
