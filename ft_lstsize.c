int	ft_lstsize(t_list *lst)
{
    int count;

    if (!lst)
        return (0);
    
    count = 0;
    while (lst->next != NULL)
    {
        lst = lst->next;
        count++;
    }
    return (count);
}
