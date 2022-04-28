#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - Inserts a new node in a sorted linked list.
 * @head: beginning node of our list
 * @number: node element
 * Return: return the address of the new node, or NULL if failed.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *tmp = *head;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = number;

	if (tmp == NULL || tmp->n > new->n)
	{
		new->next = tmp;
		*head = new;
		return (new);
	}

	while (tmp->next != NULL && tmp->next->n < new->n)
	{
		tmp = tmp->next;
	}

	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
