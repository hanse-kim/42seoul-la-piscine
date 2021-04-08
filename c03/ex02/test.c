#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char dest[20] = "hello! ";
	char src[] = "world!";

	ft_strcat(dest, src);
	printf("%s\n", dest);
}