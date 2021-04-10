#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main(void)
{
	printf("%d (%d)\n", ft_iterative_power(4, 3), 64);
	printf("%d (%d)\n", ft_iterative_power(5, 4), 625);
	printf("%d (%d)\n", ft_iterative_power(7, 5), 16807);
	printf("%d (%d)\n", ft_iterative_power(-7, 8), 5764801);
	printf("%d (%d)\n", ft_iterative_power(-5, 9), -1953125);
	printf("%d (%d)\n", ft_iterative_power(-3, 10), 59049);
	return 0;
}