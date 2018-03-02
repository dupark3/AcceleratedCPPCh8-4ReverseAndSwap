#include <iostream>
#include <vector>

typedef std::vector<int>::size_type vec_size;

int main()
{
    int myints[] = {1, 2, 3, 4, 5};
    std::vector<int> vec (myints, myints + sizeof(myints) / sizeof(int));

    std::cout << "Original vector is: ";
    for (vec_size i = 0; i != vec.size(); ++i)
        std::cout << vec[i] << " ";

    reverse(vec.begin(), vec.end());

    std::cout << std::endl << "Reversed vector is: ";
    for(vec_size i = 0; i != vec.size(); ++i)
        std::cout << vec[i] << " ";

    return 0;
}
