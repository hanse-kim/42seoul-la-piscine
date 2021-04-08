#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int main(void)
{
	printf("%d\n", ft_atoi_base("baabbaaa", "ab"));
	printf("%d\n", ft_atoi_base("10010010", "01"));
}