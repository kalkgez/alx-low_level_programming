#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list.
 *
 * @head: A pointer
 * @index: index of node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *currect = NULL;
	unsigned int n = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (n < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		n++;
	}
	currect = temp->next;
	temp->next = currect->next;
	free(currect);
	return (1);
}
