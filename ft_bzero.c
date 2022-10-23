/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlpeterson114 <mlpeterson114@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:49:45 by mpeterso          #+#    #+#             */
/*   Updated: 2022/10/23 18:12:16 by mlpeterson1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int main()
{
	char s[] = "abcdef";
	ft_bzero(s, 4);
	printf("%s", s);
	return 0;
}*/
