#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return(c - 32);
	}
	return(c);
}

/*int main ()
{
	printf("%c\n", ft_toupper('-'));
	printf("%c\n", ft_toupper('b'));
	printf("%c\n", ft_toupper('x'));
	return 0;}*/
