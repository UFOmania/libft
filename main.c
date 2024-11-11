#include "libft.h"
#include <stdio.h>


void	add_to_back(t_list **lst, t_list *new)
{
	(*lst)->next = new;
	(*lst) = new;
}

void	print_list(t_list *head)
{
	t_list *ptr = head;
	while(ptr)
	{
		printf("%s\n",(char *)ptr->content);
		ptr = ptr->next;
	}
}

int main()
{
	t_list *head = ft_lstnew(ft_strdup("42"));

	t_list *ptr = head;
	add_to_back(&ptr, ft_lstnew(ft_strdup("98")));
	add_to_back(&ptr, ft_lstnew(ft_strdup("3")));
	print_list(head);

}
