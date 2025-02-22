#pragma once

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    private:

    public:
        typedef typename std::stack<T>::container_type::iterator        iterator;
        typedef typename std::stack<T>::container_type::const_iterator  const_iterator;

        MutantStack();
        MutantStack(const MutantStack& other);
        ~MutantStack();

        MutantStack&  operator=(const MutantStack& other);

        iterator begin();
        iterator end();
        const_iterator begin() const;
        const_iterator end() const;
};

template <typename T>
MutantStack<T>::MutantStack()
{
    std::cout << "MutantStack's default constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& other) : std::stack<T>(other)
{
    std::cout << "MutantStack's copy constructor called" << std::endl;
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
        std::stack<T>::operator=(other);
    }
    return *this;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return this->c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
    return this->c.end();
}