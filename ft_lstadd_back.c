void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *temp;

    temp = ft_lstlast(*lst);
    if (temp == NULL)
    {
        *lst = new;
        return (0);
    }   
    else
        temp->next = new;
}
