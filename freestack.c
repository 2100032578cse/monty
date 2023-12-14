#include "monty.h"
/**
 * freestack - this free the stack
 * @head: the pointer to head
 * Return: nothing
*/
void freestack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
