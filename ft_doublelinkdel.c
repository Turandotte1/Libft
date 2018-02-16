void	ft_doublelink_del(t_dbllist **list)
{
	t_elem	*tmp;
	t_elem	*tmp_next;

	tmp = (*list)->head;
	while (tmp != NULL)
	{
		free(tmp->content);
		tmp->content = NULL;
		tmp_next = tmp->next;
		free(tmp);
		tmp = tmp_next;
	}
	(*list)->tail = NULL;
	(*list)->head = NULL;
	free(*list);
	*list = NULL;
}