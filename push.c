#include "monty.h"

/**
 * push_node - Adds a node to the stack
 * @stack: Pointer to the stack head
 * @line_number: Line number where the push operation is called
 * 
 * Description:
 * This function adds a new node to the stack with the integer value specified as an argument.
 * 
 * Return: No return value
 */
void push_node(stack_t **stack, unsigned int line_number)
{
  int value, index = 0, invalid_arg = 0;

  if (bus.argument)
  {
    if (bus.argument[0] == '-')
      index++;
    for (; bus.argument[index] != '\0'; index++)
    {
      if (bus.argument[index] > '9' || bus.argument[index] < '0')
        invalid_arg = 1;
    }
    if (invalid_arg == 1)
    {
      fprintf(stderr, "L%d: usage: push integer\n", line_number);
      fclose(bus.file);
      free(bus.content);
      free_stack(*stack);
      exit(EXIT_FAILURE);
    }
  }
  else
  {
    fprintf(stderr, "L%d: usage: push integer\n", line_number);
    fclose(bus.file);
    free(bus.content);
    free_stack(*stack);
    exit(EXIT_FAILURE);
  }
  
  value = atoi(bus.argument);

  if (bus.lifo == 0)
    add_node_to_stack(stack, value);
  else
    add_node_to_queue(stack, value);
}

