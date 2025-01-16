template <typename T>
typename T::const_iterator easyfind(T& container, int n)
{
    typename T::const_iterator  it = container.begin();
    while (it != container.end())
    {
        if (*it == n)
            return it;
        it++;
    }
    throw std::out_of_range("Didn't find any occurence of this value");

}