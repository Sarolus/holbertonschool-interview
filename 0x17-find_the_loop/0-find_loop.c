#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 *
 * @head: The linked list where we search the loop
 *
 * Return: The adress of where the loop is starting, otherwise NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *search, *start;

	search = head;
	start = head;
	while (search != NULL && search->next != NULL)
	{
		while (start != search->next && start != search)
			start = start->next;

		if (start == search->next)
			return (search->next);

		start = head;
		search = search->next;
	}

	return (NULL);
}
