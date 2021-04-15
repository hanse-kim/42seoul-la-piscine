/*
======================================./2-0-ft_strdup.txt=======================
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
================================================================================
*/

#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i += 1;
	return i;
}

char *ft_strdup(char *src)
{
	int size = ft_strlen(src);
	char *dup = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	int i = 0;
	while (i < size)
	{
		dup[i] = src[i];
		i += 1;
	}
	dup[i] = '\0';
	return dup;
}
