#include <stdio.h>
#include <io.h>

void ft_putnbr_base(int nbr, char *base);

int main(void)
{
	ft_putnbr_base(152, "ab");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(75, "aaaa");
	write(1, "\n", 1);
}