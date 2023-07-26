#include "monty.h"

/**
 * add_top_two - Adds the top two elements of the stack.
 * @stack: Pointer to the stack head
 * @line_number: Line number where the operation is called
 * 
 * Description:
 * This function adds the values of the top two elements in a stack.
 * 
 * Return: No return value
 */
void add_top_two(stack_t **stack, unsigned int line_number)
{
  stack_t *current_node;
  int stack_length = 0, result;

  current_node = *stack;
  
  while (current_node)
  {
    current_node = current_node->next;
    stack_length++;
  }
  
  if (stack_length < 2)
  {
    fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
    fclose(bus.file);
    free(bus.content);
    free_stack(*stack);
    exit(EXIT_FAILURE);
  }
  
  current_node = *stack;
  result = current_node->value + current_node->next->value;
  current_node->next->value = result;
  *stack = current_node->next;
  free(current_node);
}

