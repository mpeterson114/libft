/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:53:30 by mpeterso          #+#    #+#             */
/*   Updated: 2022/10/04 17:22:37 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;
	size_t	j;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);

	j = d_len;
	i = 0;
	if (d_len < dstsize - 1 && dstsize > 0)
	{
		while ((src[i] != '\0') && d_len + i < dstsize - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	if (d_len >= dstsize)
		d_len = dstsize;
	return (d_len + s_len);
}

/*int main()
{
	const char src[] = "UPPPPPPPPPPPPPPPPP";
	char dst[] = "WHAT'S";
	size_t dstsize = 20;
	printf("%zu", ft_strlcat(dst, src, dstsize));
	return 0;}*/ 
