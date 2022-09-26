/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:53:30 by mpeterso          #+#    #+#             */
/*   Updated: 2022/09/26 11:53:32 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	d_len;
	int	s_len;
	int	i;
	int	j;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);

	i = 0;
	j = d_len;
	while ((src[i] != '\0') && j < dstsize)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (d_len + s_len);
}

/*int main()
{
	const char src[] = "UPPPPPPPPPPPPPPPPP";
	char dst[] = "WHAT'S";
	size_t dstsize = 20;
	printf("%zu", ft_strlcat(dst, src, dstsize));
	return 0;}*/ 
