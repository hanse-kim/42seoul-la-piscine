#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
	char str[] = "HeLlO, WoRlD!";
	ft_strlowcase(str);
	printf("%s\n", str);
}