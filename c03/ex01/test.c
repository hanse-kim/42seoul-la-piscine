#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	printf("strncmp : ft_strncmp\n");
	printf("%d : %d\n", strncmp("aaa", "aaz", 2), ft_strncmp("aaa", "aaz", 2));
	// printf("%d : %d\n", strncmp("zzz", "z", 3), ft_strncmp("zzz", "z", 3));
	// printf("%d : %d\n", strncmp("zzz", "zzzz", 2), ft_strncmp("zzz", "zzzz", 2));
	// printf("%d : %d\n", strncmp("", "", 2), ft_strncmp("", "", 15));
	// printf("%d : %d\n", strncmp("", "", 2), ft_strncmp("", "", 0));
}