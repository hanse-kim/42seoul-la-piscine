/*
======================================./2-5-ft_strrev.txt=======================
Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
================================================================================
*/

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}

char *ft_strrev(char *str)
{
	int left = 0;
	int right = ft_strlen(str) - 1;
	int temp;
	while (left < right)
	{
		temp = str[left];
		str[left] = str[right];
		str[right] = temp;
		left += 1;
		right -= 1;
	}
	return str;
}

#include <stdio.h>

int main(void)
{
	char str[] = "hello, world!";
	printf("%s\n", ft_strrev(str));
}