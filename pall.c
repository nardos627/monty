#include "monty.h"

/**
 * print_stack - Prints the stack
 * @stack: Pointer to the stack head
 * @line_number: Line number where the operation is called (not used)
 * 
 * Description:
 * This function prints the integer values of each node in the stack.
 * 
 * Return: No return value
 */
void print_stack(stack_t **stack, unsigned int line_number)
{
  stack_t *current_node;
  (void)line_number;

  current_node = *stack;
  
  if (current_node == NULL)
    return;

  while (current_node != NULL)
  {
    printf("%d\n", current_node->value);
    current_node = current_node->next;
  }
}
