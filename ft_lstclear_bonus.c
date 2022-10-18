/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:07:53 by mpeterso          #+#    #+#             */
/*   Updated: 2022/10/18 11:26:54 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *temp;

    if (!*lst)
        return ;
    while (*lst)
    {  
        temp = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = temp;
    }
    *lst = NULL;
}
