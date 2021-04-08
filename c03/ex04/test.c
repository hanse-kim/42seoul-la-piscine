#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
	char str1[] = "abcdefg";
	char str2[] = "abcdfeg";
	char str3[] = "";
	char to_find[] = "efghijk";

	printf("str1: %s\n", ft_strstr(str1, to_find));
	printf("str2: %s\n", ft_strstr(str2, to_find));
	printf("str3: %s\n", ft_strstr(str3, to_find));
}