/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:39:19 by mpeterso          #+#    #+#             */
/*   Updated: 2022/10/04 16:13:27 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t len;
	char *dst;

	len = ft_strlen(s1) + 1;
	dst = malloc(len);
	if (dst == 0)
		return(NULL);
	ft_memcpy(dst, s1, len);
	return (dst);
}

/*int main()
{
	const char s1[] = "abcdef";
	printf("%s", ft_strdup(s1));
	return 0;}*/

