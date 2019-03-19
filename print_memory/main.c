#include <unistd.h>

void	print_memory(const void *addr, size_t size);

int		main(void)
{
	int		tab[10] = {1, 98, 54332, 67, 23, 5, 98, 345, 563, 46};

	print_memory(tab, 10);
	return (0);
}
