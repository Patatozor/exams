typedef struct		s_list
{
	int				data;
	struct s_list	next;
}					t_list;

int					cycle_detector(const t_list *list)
{
	void	*ptr;

	if (!list)
		return (0);
	ptr = list;
	while (list->next)
	{
		if (list->next == ptr)
			return (1);
		list = list->next;
	}
	return (cycle_detector(list->next));
}
