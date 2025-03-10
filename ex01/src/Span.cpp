#include "../inc/Span.hpp"

Span::Span(unsigned int N) : _max(N)
{
}

Span::Span(const Span& other)
{
    *this = other;
}

Span::~Span()
{
}

Span& Span::operator=(const Span& other)
{
    if (this != &other) {
        this->_max = other._max;
    }
    return *this;
}

void    Span::addNumber(int nb)
{
    if (_vec.size() == _max)
        throw std::overflow_error("Span is already full");
    _vec.push_back(nb);
}

int Span::shortestSpan() const
{
    if (_vec.size() < 2)
        throw std::length_error("Not enough numbers in the span");

    std::vector<int> tmp = _vec;
    std::sort(tmp.begin(), tmp.end());

    int shortest_span = tmp[1] - tmp[0];

    for (size_t i = 2; i < tmp.size(); i++)
    {
        int span = tmp[i] - tmp[i - 1];
        if (span < shortest_span)
            shortest_span = span;
    }

    return shortest_span;
}

int Span::longestSpan() const
{
    if (_vec.size() < 2)
        throw std::length_error("Not enough numbers in the span");

    std::vector<int>::const_iterator min = std::min_element(_vec.begin(), _vec.end());
    std::vector<int>::const_iterator max = std::max_element(_vec.begin(), _vec.end());

    return *max - *min;
}

void    Span::addRange(Iter begin, Iter end)
{
    if (_vec.size() + std::distance(begin, end) > _max)
        throw std::length_error("Not enough numbers in the span");
    _vec.insert(_vec.end(), begin, end);
}