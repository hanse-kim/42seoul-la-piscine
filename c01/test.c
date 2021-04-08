#include <stdio.h>
#include "./test.h"

int main(void)
{
	printf("==== ex00 ====\n");
	int num = 10;
	printf("before call ft_ft: %d\n", num);
	ft_ft(&num);
	printf("after call ft_ft: %d\n", num);
	
	printf("==== ex01 ====\n");
	printf("pass\n");
	
	printf("==== ex02 ====\n");
	int num1 = 5;
	int num2 = 12;
	printf("before swap: %d, %d\n", num1, num2);
	ft_swap(&num1, &num2);
	printf("after swap: %d, %d\n", num1, num2);
	
	printf("==== ex03 ====\n");
	int div, mod;
	num1 = 123;
	num2 = 10;
	printf("num1: %d, num2: %d\n", num1, num2);
	ft_div_mod(num1, num2, &div, &mod);
	printf("div: %d, mod: %d\n", div, mod);

	printf("==== ex04 ====\n");
	num1 = 123;
	num2 = 10;
	printf("before divmod: %d, %d\n", num1, num2);
	ft_ultimate_div_mod(&num1, &num2);
	printf("after divmod: %d, %d\n", num1, num2);

	printf("==== ex05 ====\n");
	ft_putstr("Hello, world!\n");
	ft_putstr("");

	printf("==== ex06 ====\n");
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	printf("length of alphabet: %d\n", ft_strlen(alphabet));
	printf("length of empty: %d\n", ft_strlen(""));

	printf("==== ex07 ====\n");
	int arr[] = {1, 2, 3, 4, 5};
	printf("arr origin: %d, %d, %d, %d, %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	ft_rev_int_tab(arr, 5);
	printf("arr reverse: %d, %d, %d, %d, %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);

	printf("==== ex08 ====\n");
	int arr2[] = {5, 2, 1, 3, 4, 7, 1};
	printf("arr2 origin: ");
	for(int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
	{
		printf("%d, ", arr2[i]);
	}
	printf("\n");
	ft_sort_int_tab(arr2, 7);
	printf("arr2 sorted: ");
	for(int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
	{
		printf("%d, ", arr2[i]);
	}
	printf("\n");
}
