#include "sort.h"

/**
 * insertion_sort_list - performs an in-place function sort
 * @list: list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *outer, *inner;
	int flag = 0;

	if ((*list)->next == NULL || *list == NULL)
	{
		return;
	}
	outer = *list;
	outer = outer->next;
	while (outer)
	{
		flag = 0;
		inner = outer;
		if (inner->prev != NULL && inner->n < inner->prev->n)
		{
			inner = inner->prev;
			flag = 1;
			flop(outer, inner, list);
			print_list(*list);
		}
		if (flag == 1)
		{
			outer = *list;
		}
		else
			outer = outer->next;
	}
}
/**
 * flop - switches the postion of two nodes
 * @node1: one of the nodes to be floped
 * @node2: the other one
 * @list: List head
 */
void flop(listint_t *node1, listint_t *node2, listint_t **list)
{
	if (node1->next == NULL)
	{
		/*tail*/
		node2->prev->next = node1;
		node2->next = NULL;
		node1->next = node2;
		node1->prev = node2->prev;
		node2->prev = node1;
	}
	else if (node2->prev ==  NULL)
	{
		/*head*/
		node1->next->prev = node2;
		node2->next = node1->next;
		node1->next = node2;
		node1->prev = NULL;
		node2->prev = node1;
		*list = node1;
	}
	else
	{/*middle*/
		node2->next->prev = node2->prev;
		node2->prev->next = node2->next;
		node2->next = node1->next;
		node1->next = node2;
		node2->prev = node1;
		node2->next->prev = node2;
	}
}
