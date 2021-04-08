#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char dest1[20] = "hello, world!";
	char src[] = " 42424242!!!!!";
	int i = ft_strlcat(dest1, src, 20);
	printf("%s\n%d\n", dest1, i);
}