/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:51:59 by mpeterso          #+#    #+#             */
/*   Updated: 2022/10/18 12:44:14 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*csrc;
	char		*cdst;

	if ((dst == src) || n == '\0')
	{
		return (dst);
	}
	if (dst == 0 && src == 0)
	{
		return (0);
	}
	csrc = (const char *)src;
	cdst = (char *)dst;
	while (n--)
	{
		cdst[n] = csrc[n];
	}
	return (cdst);
}

/*int main()
{
        const char src[] = "hello";
        char dst [50] = "doctor";
        size_t n = 2;
        ft_memcpy(dst, src, n);
        printf("%s", dst);
        return 0;}*/