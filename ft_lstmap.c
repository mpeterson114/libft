#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new;
    int size;

    if (!lst)
        return (0);
    size = ft_lstsize(lst);
    new =(t_list *)malloc(sizeof(t_list) * (size + 1));
    if (!new)
        return (0);
    while (new != NULL)
    {
        new = f(lst->content);
        new = new->next;
    }
}