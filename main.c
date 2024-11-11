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
	int i =0;
	while(ptr)
	{
		printf("%d\n",*(int *)ptr->content);
		//printf("%d",i++);
		ptr = ptr->next;
	}
}
void del(void *data)
{
	free(data);
	data = NULL;
}
void *f(void *ctx)
{
	int *r = malloc(sizeof(int));
	*r = ft_strlen(ctx);
	return (r);	
}
#include <string.h>
int main()
{

	t_list *head = ft_lstnew(ft_strdup("42"));

	t_list *ptr = head;
	printf("%p\n",head);
	for(int i = 0; i< 10 ; i++)
	{
		add_to_back(&ptr, ft_lstnew(ft_strdup("node")));
		//printf("%d\n",i);
	}
	//ft_lstdelone(head->next->next, &del);
	printf("%p\n",head);
	t_list *new_list = ft_lstmap(head, &f, &del);
	print_list(new_list);
	ft_lstclear(&head, del);
	ft_lstclear(&new_list, del);
	// char *s = "helo";
	// memmove(s,s,999);
	//printf("%p",s);
	
}

