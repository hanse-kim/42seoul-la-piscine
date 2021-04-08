#include <stdio.h>

int ft_atoi(char *str);

int main(void)
{
	printf("%d\n", ft_atoi("   ---123534"));
	printf("%d\n", ft_atoi(" + 123"));
	printf("%d\n", ft_atoi(""));
	printf("%d\n", ft_atoi(" ++--++12523esdfdqw"));
	printf("%d\n", ft_atoi(" ++--++qwe12523esdfdqw"));
	printf("%d\n", ft_atoi("qw ++--++12523esdfdqw"));
	printf("%d\n", ft_atoi("                          582390580"));
}