#include"monty.h"
/**
 * mul - fun to do mult
 * Return: nothin
*/
void mul(void)
{
	int stack[STACK_SIZE];
	int top = -1;
	int operand1, operand2, result;

	if (top < 1)
	{
		fprintf(stderr, "Error: can't mul, stack too short\n");
		exit(EXIT_FAILURE);
	}
	operand1 = fun_pop();
	operand2 = fun_pop();
	result = operand1 * operand2;
	fun_push(result);
}
/**
 * main - entry
 * Return: 0
*/
int main(void)
{
	fun_push(3);
	fun_push(5);
	mul();
	printf("%d\n", stack[top]);
	return (0);
}

