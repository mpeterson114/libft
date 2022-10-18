/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:52:15 by mpeterso          #+#    #+#             */
/*   Updated: 2022/10/18 12:47:38 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*csrc;
	char		*cdst;

	if (dst == src)
	{
		return (dst);
	}
	csrc = (const char *)src;
	cdst = (char *)dst;
	if (csrc < cdst)
	{
		while (len--)
		{
			*(cdst + len) = *(csrc + len);
		}
		return (cdst);
	}
	while (len--)
	{
		*cdst++ = *csrc++;
	}
	return (dst);
}

/*int main()
{
        const char src[] = "hellor";
        char dst [] = "doctor";
        size_t len = 7;
        ft_memmove(dst, src, len);
        printf("%s", dst);
        return 0;}*/