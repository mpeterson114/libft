/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:22:25 by mpeterso          #+#    #+#             */
/*   Updated: 2022/10/07 14:22:53 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
    unsigned int nbr;
    
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        nbr = (unsigned int)(n * -1);
    }
    else
        nbr = (unsigned int)n;
    if (nbr > 9)
        ft_putnbr_fd ((nbr / 10), fd);
    ft_putchar_fd((48 + nbr % 10), fd);
}

/*int main()
{
    ft_putnbr_fd(-22, 1);
    return 0;
}*/
