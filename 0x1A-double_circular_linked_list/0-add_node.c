#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "list.h"

/**
 * first_node - creates the first node of a list
 *
 * @list: pointer to the list
 * @str: string to copy into the node
 *
 * Return: pointer to the new node
 */
List *first_node(List **list, const char *str)
{
	List *new;

	new = malloc(sizeof(List));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->next = new;
	new->prev = new;
	*list = new;
	return (new);
}

/**
 * add_node_end - adds node at the end
 *
 * @list: circular linked list
 * @str: string to insert
 *
 * Return: Address of the new node, or NULL on failure
 */
List *add_node_begin(List **head, const char *str)
{
	List *new, *tmp, *aux;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (first_node(head, str));

	aux = *head;
	new = malloc(sizeof(List));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = aux;
	new->prev = aux->prev;
	tmp = aux->prev;
	aux->prev = new;
	tmp->next = new;

	return (new);
}

/**
 * add_node_begin - adds node at the beginning
 *
 * @list: circular linked list
 * @str: string to insert
 *
 * Return: Address of the new node, or NULL on failure
 */
List *add_node_end(List **head, const char *str)
{
	List *new, *tmp, *aux;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (first_node(head, str));

	aux = *head;
	new = malloc(sizeof(List));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = aux;
	new->prev = aux->prev;
	tmp = aux->prev;
	aux->prev = new;
	tmp->next = new;
	*head = new;

	return (new);
}
