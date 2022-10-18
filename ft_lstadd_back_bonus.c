/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:07:33 by mpeterso          #+#    #+#             */
/*   Updated: 2022/10/18 11:30:58 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *temp;

    temp = ft_lstlast(*lst);
    if (temp == NULL)
    {
        *lst = new;
        return ;
    }   
    else
        temp->next = new;
}
