#pragma once

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    private:

    public:
        MutantStack();
        MutantStack(const MutantStack& other);
        ~MutantStack();

        MutantStack&  operator=(const MutantStack& other);
};

template <typename T>
MutantStack<T>::MutantStack()
{
    std::cout << "MutantStack's default constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& other)
{
    std::cout << "MutantStack's copy constructor called" << std::endl;
    *this = other;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
    std::cout << "MutantStack's destructor called" << std::endl;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& other)
{
    std::cout << "MutantStack's copy assignment operator called" << std::endl;
    if (this != &other) {
    }
    return *this;
}
