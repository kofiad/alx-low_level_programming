#include "lists.h"

/**
 * get_dnodeint_at_index -  function that returns the nth node of
 * a dlistint_t linked list
 * @head: head of node
 * @index: index of the node, starting from 0
 * return:  nth node of a dlistint_t linked list
 * if the node does not exist, return NULL
 */

size_t print_dlistint(const dlistint_t *h)
{
    int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}