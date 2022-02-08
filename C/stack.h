//
// Created by Daniel on 07/02/2022.
//

#pragma once

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Node
{
    void*        value;
    struct Node* next;
};

struct Stack
{
    struct Node* top;
};

struct Stack* stack_create();

bool stack_empty(struct Stack**);

bool stack_push(struct Stack**, void*);

void* stack_pop(struct Stack**);

void* stack_peek(struct Stack**);

void stack_clear(struct Stack**);

