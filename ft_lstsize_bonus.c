/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:07:11 by mpeterso          #+#    #+#             */
/*   Updated: 2022/10/18 11:26:11 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
    int count;

    if (!lst)
        return (0);
    
    count = 1;
    while (lst->next != NULL)
    {
        lst = lst->next;
        count++;
    }
    return (count);
}
