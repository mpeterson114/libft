/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:20:33 by mpeterso          #+#    #+#             */
/*   Updated: 2022/09/26 11:48:12 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int length;

	length = ft_strlen(s) - 1;
	while (length >= 0)
	{
		if (s[length] == c)
			return ((char *)&s[length]);
		length--;
	}
	return (NULL);
}

/*int main()
{
	const char s[] = "chicken";
	int c = 'c';
	printf("%s", ft_strrchr(s, c));
	return (0);}*/
