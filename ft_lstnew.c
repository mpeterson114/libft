/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlpeterson114 <mlpeterson114@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:20:47 by mpeterso          #+#    #+#             */
/*   Updated: 2022/10/17 11:44:19 by mlpeterson1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
    t_list    *new;
    
    
    new =(t_list *)malloc(sizeof(t_list));
    if (!new)
        return (0);
    new->content = content;
    new->next = NULL;
    return (new); 
}
