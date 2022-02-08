//
// Created by Daniel on 07/02/2022.
//

#include "stack.h"

struct Stack* stack_create()
{
    struct Stack* stack = malloc(sizeof(struct Stack));

    if (stack == NULL)
        return NULL;

    stack->top = NULL;
    return stack;
}

bool stack_empty(struct Stack** stack_ref)
{
    return (*stack_ref)->top == NULL;
}

bool stack_push(struct Stack** stack_ref, void *value)
{
    if (*stack_ref == NULL || value == NULL)
        return false;

    struct Node* new_node = malloc(sizeof(struct Node));
    new_node->value = value;
    new_node->next = (*stack_ref)->top;
    (*stack_ref)->top = new_node;

    return true;
}

void *stack_pop(struct Stack** stack_ref)
{
    if (*stack_ref == NULL || stack_empty(stack_ref))
        return NULL;

    struct Node* to_pop = (*stack_ref)->top;
    void *value = to_pop->value;
    (*stack_ref)->top = (*stack_ref)->top->next;
    to_pop->next = NULL;

    free(to_pop);
    return value;
}

void *stack_peek(struct Stack** stack_ref)
{
    if (*stack_ref == NULL || stack_empty(stack_ref))
        return NULL;
    return (*stack_ref)->top->value;
}

void stack_clear(struct Stack** stack_ref)
{
    if (*stack_ref == NULL)
        return;

    while (!stack_empty(stack_ref))
    {
        stack_pop(stack_ref);
    }
    free(*stack_ref);
    stack_ref = NULL;
}