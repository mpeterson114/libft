/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:16:08 by mpeterso          #+#    #+#             */
/*   Updated: 2022/09/22 13:16:17 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/*int main()
{
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isascii('8'));
    printf("%d\n", ft_isascii(127));
    printf("%d\n", ft_isascii(128));
	return 0;}*/ 
