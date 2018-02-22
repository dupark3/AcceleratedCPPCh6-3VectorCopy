#include <algorithm> // copy
#include <iostream>
#include <iterator> // back_inserter
#include <vector>

int main() {
    std::vector<int> u(10, 100);
    std::vector<int> v = u;

    std::cout << "u: ";
    for (std::vector<int>::size_type i = 0; i != u.size(); ++i)
        std::cout << u[i] << " ";
    std::cout << std::endl;

    std::cout << "v: ";
    for (std::vector<int>::size_type i = 0; i != v.size(); ++i)
        std::cout << v[i] << " ";
    std::cout << std::endl;

    return 0;
}
