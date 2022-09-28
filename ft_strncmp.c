/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:56:46 by mpeterso          #+#    #+#             */
/*   Updated: 2022/09/28 20:13:48 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	unsigned int	diff;

	i = 0;
	diff = 0;
	while (i < n && diff == 0 && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	while (i < n && diff == 0 && (s1[i] == 0 || s2[i] == 0))
	{
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
	}
	return(diff);
}

/*int main()
{
	const char s1[] = "hola";
	const char s2[] = "cola";
	printf("%d", ft_strncmp(s1, s2, 4));
	return 0;
}	*/
