void *ft_print_memory(void *addr, unsigned int size);

int main(void)
{
	char str[] = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ©«®¶¼";
	ft_print_memory(str, sizeof(str));
}