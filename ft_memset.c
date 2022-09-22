#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

/*int	main(void)
{
	char b[] = "abcdef";
	ft_memset(b, 'j', 8);
	printf("%s", b);
	return 0;
}*/
