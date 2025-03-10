#include "../inc/Span.hpp"

int main()
{
    try
    {
        std::vector<int>    test;
        Span sp = Span(50000);
        srand(std::time(NULL));
        for (size_t i = 0; i < 50000; i++)
        {
            test.push_back(rand());
        }
        sp.addRange(test.begin(), test.end());

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    

    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

}