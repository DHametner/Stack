#include <stdio.h>

#include "stack.h"

void test_with_num(struct Stack** stack_ref)
{
    printf("TESTING(with numbers)\n");
    printf("Is empty: %s\n", stack_empty(stack_ref) ? "true" : "false");

    stack_push(stack_ref, (int*) 1);
    stack_push(stack_ref, (int*) 2);
    stack_push(stack_ref, (int*) 3);
    stack_push(stack_ref, (int*) 4);
    stack_push(stack_ref, (int*) 5);

    printf("Is empty: %s\n", stack_empty(stack_ref) ? "true" : "false");
    printf("Peek: %d \n", (int) stack_peek(stack_ref));
    printf("Pop: %d\n", (int) stack_pop(stack_ref));
    printf("Pop: %d\n", (int) stack_pop(stack_ref));
    printf("Peek: %d\n", (int) stack_peek(stack_ref));
    printf("END TESTING(with numbers)\n");
}

void test_with_str(struct Stack** stack_ref)
{
    printf("TESTING(with strings)\n");
    printf("Is empty: %s\n", stack_empty(stack_ref) ? "true" : "false");

    stack_push(stack_ref, (char*) "First");
    stack_push(stack_ref, (char*) "Second");
    stack_push(stack_ref, (char*) "Third");
    stack_push(stack_ref, (char*) "Fourth");
    stack_push(stack_ref, (char*) "Five");

    printf("Is empty: %s\n", stack_empty(stack_ref) ? "true" : "false");
    printf("Peek: %s \n", (char*) stack_peek(stack_ref));
    printf("Pop: %s\n", (char*) stack_pop(stack_ref));
    printf("Pop: %s\n", (char*) stack_pop(stack_ref));
    printf("Peek: %s\n", (char*) stack_peek(stack_ref));
    printf("END TESTING(with strings)\n");
}

int main()
{
    struct Stack* stack = NULL;

    stack = stack_create();
    test_with_num(&stack);
    stack_clear(&stack);

    stack = stack_create();
    test_with_str(&stack);
    stack_clear(&stack);

    return 0;
}
