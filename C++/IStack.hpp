//
// Created by Daniel on 07/02/2022.
//

#pragma once

#include <cstddef>
#include <cstdlib>

template<class T>
struct Node
{
    T        value;
    Node<T>* next;
};


template<class T>
class IStack
{
public:
    virtual bool isEmpty() = 0;

    virtual void push(T)   = 0;

    virtual T pop()        = 0;

    virtual T peek()       = 0;

    virtual void clear()   = 0;
};
