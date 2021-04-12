#include <stdio.h>

char *ft_strdup(char *src);

int main(void)
{
	char *str = "hello, world!";
	char *dup;

	dup = ft_strdup(str);
	printf("%s\n", str);
	printf("%s\n", dup);
}
