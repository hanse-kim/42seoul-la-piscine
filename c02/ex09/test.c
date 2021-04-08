#include <stdio.h>

char *ft_strcapitalize(char *str);

int main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
}