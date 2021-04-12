#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(int argc, char **argv)
{
	char sep[] = ", ";
	char *result = ft_strjoin(argc - 1, ++argv, sep);
	printf("%s\n", result);
	return (0);
}
