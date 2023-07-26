#include "monty.h"

/**
 * pop_stack - Remove the top element from the stack
 * @stack: Pointer to the stack head
 * @line_number: Line number where the operation is called
 * 
 * Description:
 * This function removes the top element from the stack.
 * 
 * Return: No return value
 */
void pop_stack(stack_t **stack, unsigned int line_number)
{
  stack_t *current_node;

  if (*stack == NULL)
  {
    fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
    fclose(bus.file);
    free(bus.content);
    free_stack(*stack);
    exit(EXIT_FAILURE);
  }
  
  current_node = *stack;
  *stack = current_node->next;
  free(current_node);
}
