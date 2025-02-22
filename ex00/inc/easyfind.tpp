template <typename T>
typename T::const_iterator easyfind(T& container, int n)
{
    typename T::const_iterator it = std::find(container.begin(), container.end(), n);

    if (it != container.end()) {
        return it;
    } else {
        throw std::out_of_range("Didn't find any occurrence of this value");
    }
}