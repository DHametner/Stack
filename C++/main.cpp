#include <iostream>

#include "Stack.hpp"

void test_with_num()
{
    IStack<int>* stack = new Stack<int>;

    std::cout << "TESTING(with numbers)" << "\n";
    std::cout << "Is empty: " << std::boolalpha << stack->isEmpty() << "\n";

    stack->push(1);
    stack->push(2);
    stack->push(3);
    stack->push(4);
    stack->push(5);

    std::cout << "Is empty: " << std::boolalpha << stack->isEmpty() << "\n";
    std::cout << "Peek: " << stack->peek() << "\n";
    std::cout << "Pop: " << stack->pop() << "\n";
    std::cout << "Pop: " << stack->pop() << "\n";
    std::cout << "Peek: " << stack->peek() << "\n";

    stack->clear();
    std::cout << "END TESTING(with numbers)..." << "\n";
    delete (Stack<int>*) stack;
}

void test_with_str()
{
    IStack<std::string>* stack = new Stack<std::string>;

    std::cout << "TESTING(with numbers)" << "\n";
    std::cout << "Is empty: " << std::boolalpha << stack->isEmpty() << "\n";

    stack->push("First");
    stack->push("Second");
    stack->push("Third");
    stack->push("Fourth");
    stack->push("Five");

    std::cout << "Is empty: " << std::boolalpha << stack->isEmpty() << "\n";
    std::cout << "Peek: " << stack->peek() << "\n";
    std::cout << "Pop: " << stack->pop() << "\n";
    std::cout << "Pop: " << stack->pop() << "\n";
    std::cout << "Peek: " << stack->peek() << "\n";

    stack->clear();
    std::cout << "END TESTING(with strings)..." << "\n";
    delete (Stack<std::string>*) stack;
}

int main()
{
    test_with_num();
    test_with_str();
    return EXIT_SUCCESS;
}
