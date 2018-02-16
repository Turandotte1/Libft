t_double		*ft_doublelink_creat(void)
{
	t_dbllist	*list;

	list = (t_dbllist *)malloc(sizeof(t_dbllist));
	if (list == NULL)
		return (NULL);
	else
	{
		list->length = 0;
		list->tail = NULL;
		list->head = NULL;
	}
	return (list);
}
