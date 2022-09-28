/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:49:00 by mpeterso          #+#    #+#             */
/*   Updated: 2022/09/28 20:19:09 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return (char *)(s + i);
		i++;
	}
	return (NULL);
}

/*char	*ft_strchr(const char *s, int c)
{
	char	*my_s;
	
	my_s = (char *)s;
	while (*my_s != '\0')
	{
		if (*my_s == (char)c)
			return my_s;
		my_s++;
	}
	return (NULL);
	}

int main()
{
	const char s[] = "cheese";
	int c = 'e';
	printf("%s", ft_strchr(s, c));
	return 0;}*/	
