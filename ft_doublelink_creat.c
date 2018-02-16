t_double		*ft_doublelink_creat(void)
{
	t_double	*list;

	list = (t_double *)malloc(sizeof(t_double));
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
