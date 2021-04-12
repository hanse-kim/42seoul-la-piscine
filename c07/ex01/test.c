#include <stdio.h>

int *ft_range(int min, int max);

int main(void)
{
	int min = 2147483640;
	int max = 2147483647;
	int *arr = ft_range(min, max);
	for (int i = 0; i < max - min; i++)
	{
		printf("%d\n", arr[i]);
	}
}
