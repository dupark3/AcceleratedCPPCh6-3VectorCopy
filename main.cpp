#include <algorithm> // copy
#include <iostream>
#include <iterator> // back_inserter, inserter
#include <vector>

int main() {
    std::vector<int> u(10, 100);
    std::vector<int> v;

    // Advantages using inserter: can insert anywhere within the output vector
    // Disadvantages: slower appending
    copy(u.begin(), u.end(), inserter(v, v.begin()));

    // u contains 10 elements with value 100
    std::cout << "u: ";
    for (std::vector<int>::size_type i = 0; i != u.size(); ++i)
        std::cout << u[i] << " ";
    std::cout << std::endl;

    // v also contains 10 elements with value 100
    std::cout << "v: ";
    for (std::vector<int>::size_type i = 0; i != v.size(); ++i)
        std::cout << v[i] << " ";
    std::cout << std::endl;

    return 0;
}
