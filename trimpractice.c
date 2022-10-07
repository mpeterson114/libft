/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trimpractice.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:04:25 by mpeterso          #+#    #+#             */
/*   Updated: 2022/10/07 14:14:09 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numstrings(const char *s, char c)
{
	size_t len;
	int	count;
	size_t	i;
	size_t old_i;

	len = ft_strlen(s);
	i = 0;
	count = 0;
	while (i < len)
	{
		while (i < len)
		{
			if (ft_strchr(s[i], c) == NULL)
				break;
			i++;
		}
		while (i < len)
		{
			if (ft_strchr(s[i], c) != NULL)
				break;
			i++;
		}
		old_i = i;
		while (i < len)
		{
			if (i > old_i)
				count = count + 1;
		}
	}
	return (count);
}

int main()
{
	const char s[] = "hey hi hello";
	char c = ' ';
	printf("%d", ft_numstrings(s, c));
	return 0;
}
