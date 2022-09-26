/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:26:23 by mpeterso          #+#    #+#             */
/*   Updated: 2022/09/26 11:49:28 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
    if (c >= 32 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/*int main()
{
	printf("%d\n", ft_isprint('A'));
	printf("%d\n", ft_isprint('8'));
    printf("%d\n", ft_isprint(127));
    printf("%d\n", ft_isprint(5));
	return 0;}*/
