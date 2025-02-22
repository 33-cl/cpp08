#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <stdexcept>
#include <cmath>
#include <ctime>

class Span
{
    private:
        std::vector<int>    _vec;
        unsigned int        _max;

        typedef std::vector<int>::iterator Iter;

    public:
        Span(unsigned int N);
        Span(const Span& other);
        ~Span();
        Span&  operator=(const Span& other);

        void    addNumber(int nb);
        void    addRange(Iter begin, Iter end);
        int     shortestSpan() const;
        int     longestSpan() const;
        
};
