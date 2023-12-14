#include "monty.h"
/**
 * fun_pall - add node to the stack ,push operation
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void fun_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
