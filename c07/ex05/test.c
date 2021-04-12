#include <stdio.h>

char **ft_split(char *str, char *delimiter);

int main(void)
{
	char **splited = ft_split("bN7c4ZrwSnQYrFqRykUnywYJPrN0ZE1Lb"
							  ,"");
	int count = 0;
	while (*splited)
	{
		printf("%s\n", *splited);
		splited += 1;
		count += 1;
	}
	printf("count: %d\n", count);
	return (0);
}