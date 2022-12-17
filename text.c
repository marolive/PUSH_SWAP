#include "push_swap.h"  

void fuck_node(t_stack **list, int data, int index)
{
	t_stack *head;
	t_stack *node;

	head = malloc(sizeof(t_stack));
	node = malloc(sizeof(t_stack));
	node = *list;
	head->number = data;
	head->next = NULL;
	if (*list == NULL)
	{		
		*list = head;
		return ;
	}
	while (node->next != NULL)
		node->next = head;
	return ;
}
