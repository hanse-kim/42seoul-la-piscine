#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char dest1[20];
	char dest2[5];
	char src[] = "Hello, world!";

	ft_strcpy(dest1, src);
	ft_strcpy(dest2, src);
	printf("%s\n%s", dest1, dest2);

	return 0;
}