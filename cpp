#include <iostream>
#include <vector>

std::vector<int> addN(std::vector<int> vec, int n) {
    if (vec.size() < n) {
        std::cout << "Error: Vector is too short." << std::endl;
        return vec;
    }

    for (int i = 0; i < vec.size(); i++) {
        vec[i] = vec[i] + n;
    }

    return vec;
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int> res = addN(vec, 2);
    for (int x : res) {
        std::cout << x << " ";
    }

    return 0;
}
