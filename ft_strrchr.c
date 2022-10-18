/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:20:33 by mpeterso          #+#    #+#             */
/*   Updated: 2022/10/18 13:09:00 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	length;

	if (s == 0)
		return (NULL);
	length = ft_strlen(s);
	while (length >= 0)
	{
		if (s[length] == c)
			return ((char *)(s + length));
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
