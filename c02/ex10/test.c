#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char src[] = "hello";
	char dest1[5];
	char dest2[10];

	ft_strlcpy(dest1, src, 5);
	ft_strlcpy(dest2, src, 10);
	printf("%s\n%s\n", dest1, dest2);
	return 0;
}