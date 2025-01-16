#include "../inc/easyfind.hpp"

int main()
{
    std::vector<int>    container;

    container.push_back(1);
    container.push_back(2);
    container.push_back(3);
    container.push_back(4);
    container.push_back(5);

    try
    {
        std::cout << *(easyfind(container, 5)) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
}