void			ft_doublelink_add(t_dbllist *list, void *content, size_t cont_size)
{
	t_elem		*new_elem;

	new_elem = (t_elem *)malloc(sizeof(t_elem));
	if (new_elem == NULL)
		return ;
	ft_bzero(new_elem, sizeof(t_elem));
	new_elem->content = (void *)malloc(cont_size);
	if (new_elem->content == NULL)
	{
		free(new_elem);
		return ;
	}
	ft_memcpy(new_elem->content, content, cont_size);
	new_elem->next = NULL;
	new_elem->prev = NULL;
	if (list->head == NULL)
		list->head = new_elem;
	else
	{
		list->tail->next = new_elem;
		new_elem->prev = list->tail;
	}
	list->tail = new_elem;
	list->length++;
}

void			ft_doublelink_add_head(t_dbllist *list, void *content,
				size_t cont_size)
{
	t_elem		*new_elem;

	if ((new_elem = (t_elem *)malloc(sizeof(t_elem))) == NULL)
		return ;
	ft_bzero(new_elem, sizeof(t_elem));
	new_elem->content = (void *)malloc(cont_size);
	if (new_elem->content == NULL)
	{
		free(new_elem);
		return ;
	}
	ft_memcpy(new_elem->content, content, cont_size);
	if (list->tail == NULL && list->head == NULL)
	{
		list->tail = new_elem;
		list->head = new_elem;
	}
	else
	{
		list->head->prev = new_elem;
		new_elem->next = list->head;
		list->head = new_elem;
	}
	list->length++;
}

void			ft_doublelink_tail(t_dbllist *list, void *content,
				size_t cont_size)
{
	t_elem		*new_elem;

	new_elem = (t_elem *)malloc(sizeof(t_elem));
	if (new_elem == NULL)
		return ;
	ft_bzero(new_elem, sizeof(t_elem));
	new_elem->content = (void *)malloc(cont_size);
	if (new_elem->content == NULL)
	{
		free(new_elem);
		return ;
	}
	ft_memcpy(new_elem->content, content, cont_size);
	if (list->tail == NULL)
	{
		new_elem->prev = NULL;
		list->head = new_elem;
	}
	else
	{
		list->tail->next = new_elem;
		new_elem->prev = list->tail;
	}
	list->tail = new_elem;
	list->length++;
}
