//
// Created by Daniel on 07/02/2022.
//

#pragma once

#include "IStack.hpp"

template<class T>
class Stack : public IStack<T>
{
public:
    Stack();

    Stack(const Stack&) = default;

    virtual ~Stack() = default;

public:
    bool isEmpty() override;

    void push(T) override;

    T pop() override;

    T peek() override;

    void clear() override;

private:
    Node<T>* m_top;
};

#include "Stack.inl"