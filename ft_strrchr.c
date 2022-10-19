/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:20:33 by mpeterso          #+#    #+#             */
/*   Updated: 2022/10/19 12:01:19 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	length;

	if (s == NULL)
		return (0);
	length = ft_strlen(s);
	while (length >= 0)
	{
		if (s[length] == (char)c)
			return ((char *)(s + length));
		length--;
	}
	return (0);
}

/*int main()
{
	const char s[] = "chicken";
	int c = '\0';
	printf("%s", ft_strrchr(s, c));
	return (0);}*/
