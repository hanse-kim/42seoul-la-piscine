/*
======================================./2-0-ft_atoi.txt=========================
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
================================================================================
*/

int is_space(char c)
{
	return c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f' || c == '\v';
}

int ft_atoi(const char *str)
{
	int num = 0;
	int sign = 1;

	while (*str && is_space(*str))
		str += 1;
	if (*str == '+' || *str == '-')
	{
		sign *= (*str == '-') ? -1 : 1;
		str += 1;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		str += 1;
	}
	return num * sign;
}

// #include <stdio.h>

// int main(int argc, char **argv)
// {
// 	if(argc >= 2)
// 		printf("%d\n", ft_atoi(argv[1]));
// 	return 0;
// }