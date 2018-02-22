#include <algorithm> // copy
#include <iostream>
#include <iterator> // back_inserter
#include <vector>

int main() {
    std::vector<int> u(10, 100);
    std::vector<int> v;

    // Advantage of using back_inserter: fast appending to the end
    // Disadvantage: cannot insert anywhere except to the end
    copy(u.begin(), u.end(), back_inserter(v));

    // u contains 10 elements of value 100
    std::cout << "u: ";
    for (std::vector<int>::size_type i = 0; i != u.size(); ++i)
        std::cout << u[i] << " ";
    std::cout << std::endl;

    // v also contains 10 elements of value 100
    std::cout << "v: ";
    for (std::vector<int>::size_type i = 0; i != v.size(); ++i)
        std::cout << v[i] << " ";
    std::cout << std::endl;


    return 0;
}
