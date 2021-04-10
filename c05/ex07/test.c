#include <stdio.h>

int ft_find_next_prime(int nb);

int main(void)
{
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(-25));
	printf("%d\n", ft_find_next_prime(2147483640));
}