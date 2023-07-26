#include "monty.h"

/**
 * do_nothing - Does nothing
 * @stack: Pointer to the stack head
 * @line_number: Line number where the operation is called
 * 
 * Description:
 * This function performs no operation and does nothing.
 * 
 * Return: No return value
 */
void do_nothing(stack_t **stack, unsigned int line_number)
{
  (void) line_number;
  (void) stack;
}

