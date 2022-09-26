/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:54:10 by mpeterso          #+#    #+#             */
/*   Updated: 2022/09/26 11:54:12 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_tolower(int c)
{
        if (c >= 'A' && c <= 'Z')
        {
                return(c + 32);
        }
        return(c);
}

/*int main ()
{
        printf("%c\n", ft_tolower('-'));
        printf("%c\n", ft_tolower('H'));
        printf("%c\n", ft_tolower('J'));
        return 0;}*/
