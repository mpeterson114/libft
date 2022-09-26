/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:49:00 by mpeterso          #+#    #+#             */
/*   Updated: 2022/09/26 11:49:02 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
