#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix1 =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::vector<std::vector<int>> matrix2 =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (const std::vector<int>& row : matrix1) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}