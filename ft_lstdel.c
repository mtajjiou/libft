#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tempList;
	t_list *nextList;

	tempList = *alst;
	while (tempList)
	{
		nextList = tempList->next;
		del((tempList)->content, (tempList)->content_size);
		free(tempList);
		tempList = nextList;
	}
	*alst = NULL;
}