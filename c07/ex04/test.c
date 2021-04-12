char *ft_convert_base(char *nbr, char *base_from, char *base_to);

#include <stdio.h>

int main(void)
{
	char *nbr = "-2147483648";
	char *base_from = "0123456789";
	char *base_to = "0123456789";
	printf("%s\n", ft_convert_base(nbr, base_from, base_to));
}