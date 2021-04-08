#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char dest1[20] = "Hello, world!";
	char src1[] = "ABCDEFGHIJK";
	char src2[] = "abc";

	ft_strncpy(dest1, src1, 5);
	printf("%s\n", dest1);
	ft_strncpy(dest1, src2, 20);
	printf("%s\n", dest1);
	return 0;
}