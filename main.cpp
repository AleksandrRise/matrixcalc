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

    int rows1 = matrix1.size();
    int rows2 = matrix2.size();
    int cols1 = matrix1[0].size();
    int cols2 = matrix2[0].size();

    if (cols1 != rows2) {
        throw std::invalid_argument("Multiplication is impossible!");
    }

    for (int r1 = 0; r1 < rows1; r1++) {
        for (int c2 = 0; c2 < cols2; c2++) {
            for (int i = 0; i < cols1; i++) {

            }
        }
    }

    return 0;
}