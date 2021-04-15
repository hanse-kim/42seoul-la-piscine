/*
======================================./2-5-ft_strcmp.txt=======================
Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);
================================================================================
*/

int ft_strcmp(char *s1, char *s2)
{
	while(*s1)
	{
		if (*s1 != *s2)
			break;
		s1 += 1;
		s2 += 1;
	}
	return *s1 - *s2;
}
