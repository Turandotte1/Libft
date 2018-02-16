void	ft_doublelink_del(t_double **list)
{
	t_node	*tmp;
	t_node	*tmp_next;

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
