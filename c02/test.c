#include <stdio.h>

char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);
int ft_str_is_alpha(char *str);
int ft_str_is_numeric(char *str);
int ft_str_is_lowercase(char *str);
int ft_str_is_uppercase(char *str);
int ft_str_is_printable(char *str);
char *ft_strupcase(char *str);
char *ft_strlowcase(char *str);
char *ft_strcapitalize(char *str);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
void ft_putstr_non_printable(char *str);
void *ft_print_memory(void *addr, unsigned int size);

int main(void)
{
	printf("==== ex02 ====\n");
	printf("test1: %d\n", ft_str_is_alpha("qweASD"));
	printf("test2: %d\n", ft_str_is_alpha("qwe!ASD"));
	printf("==== ex03 ====\n");
	printf("test1: %d\n", ft_str_is_numeric("632475462351342347623645785697807857543"));
	printf("test2: %d\n", ft_str_is_numeric("6324754623513423476a3645785697807857543"));
	printf("==== ex04 ====\n");
	printf("test1: %d\n", ft_str_is_lowercase("adbdfbvuewbuisdbnfhjanscjknsdj"));
	printf("test2: %d\n", ft_str_is_lowercase("adbdfbvuewbuiSdbnfhjanscjknsdj"));
	printf("==== ex05 ====\n");
	printf("test1: %d\n", ft_str_is_uppercase("WJFOIJIOJIOEWNVOINWEIONVOWMKLAMNGJKBEHD"));
	printf("test2: %d\n", ft_str_is_uppercase("WJFOIJIOJIOEWaVOINWEIONVOWMKLAMNGJKBEHD"));
	printf("==== ex06 ====\n");
	printf("test1: %d\n", ft_str_is_printable("twegh9348jhwejgipvv23j90rjengjkr"));
	printf("test2: %d\n", ft_str_is_printable("twegh9348jhwejgipv\nv23j90rjengjkr"));
}