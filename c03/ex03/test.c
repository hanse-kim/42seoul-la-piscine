#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char dest[20] = "hello! ";
	char src[] = "world!!!!";

	ft_strncat(dest, src, 5);
	printf("%s\n", dest);
}