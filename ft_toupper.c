/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:53:58 by mpeterso          #+#    #+#             */
/*   Updated: 2022/09/26 11:54:00 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return(c - 32);
	}
	return(c);
}

/*int main ()
{
	printf("%c\n", ft_toupper('-'));
	printf("%c\n", ft_toupper('b'));
	printf("%c\n", ft_toupper('x'));
	return 0;}*/