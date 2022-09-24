#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (char *)s;
			s++;
		}
		s++;
	}
	return (NULL);
}

/*int main()
{
	const char s[] = "jack";
	int c = 'x';
	printf("%s", ft_strchr(s, c));
	return 0;}*/
	
	
