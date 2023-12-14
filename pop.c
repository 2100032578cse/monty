#include "monty.h"
/**
 * fun_pop - the top element
 * @head: the header of stACK
 * @counter: line_number
 * Return: nothing to return
*/
void fun_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
/**
 * fun_queue - prints the top element
 * @head: the stack pointer header
 * @counter: the counter
 * Return: nothing
*/
void fun_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

