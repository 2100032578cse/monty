#include "monty.h"
/**
 * fun_pint - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void fun_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		freestack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
