//
// Created by Daniel on 07/02/2022.
//

template<class T>
Stack<T>::Stack()
        : m_top(NULL)
{
}

template<class T>
bool Stack<T>::isEmpty()
{
    return m_top == NULL;
}

template<class T>
void Stack<T>::push(T value)
{
    Node<T>* newNode = new Node<T>;
    newNode->value = value;

    if (isEmpty())
        newNode->next = NULL;
    else
        newNode->next = m_top;
    m_top = newNode;
}

template<class T>
T Stack<T>::pop()
{
    T value = T();

    if (isEmpty())
        return value;

    Node<T>* toPop = m_top;
    value = toPop->value;
    m_top = m_top->next;
    toPop->next = NULL;

    delete toPop;
    return value;
}

template<class T>
T Stack<T>::peek()
{
    T value = T();

    if (isEmpty())
        return value;

    value = m_top->value;
    return value;
}

template<class T>
void Stack<T>::clear()
{
    while (!isEmpty())
    {
        pop();
    }
    m_top = NULL;
}
