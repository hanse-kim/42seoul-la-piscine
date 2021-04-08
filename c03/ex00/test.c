#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	printf("strcmp : ft_strcmp\n");
	printf("%d : %d\n", strcmp("aaa", "aaz"), ft_strcmp("aaa", "aaz"));
	printf("%d : %d\n", strcmp("zzz", "z"), ft_strcmp("zzz", "z"));
}