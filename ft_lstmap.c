#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new;
    t_list  *list_n;

    if (!f | !del)
        return (0);
    list_n = 0;
    while (lst)
    {
        new = ft_lstnew(f(lst->content));
        if (!new)
        {
            ft_lstclear(&list_n, del);
        }
        ft_lstadd_back(&list_n, new);
        lst = lst->next;
    }
    return(list_n);
}