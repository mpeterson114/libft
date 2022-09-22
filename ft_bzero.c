#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int main()
{
	char s[] = "abcdef";
	ft_bzero(s, 4);
	printf("%s", s);
	return 0;
}*/
