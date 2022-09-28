/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:26:50 by mpeterso          #+#    #+#             */
/*   Updated: 2022/09/28 20:18:11 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const char *ptr;

	ptr = (const char*)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == c)
			return ((void *)(s + i));
		i++;
	}
	return(NULL);
}

/*int main()
{
	const char s[] = "abcdefg";
	int c = 'c';
	size_t n = 4;
	printf("%s", ft_memchr(s, c, n));
	return 0;
}*/
