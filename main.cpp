#include <iostream>
#include <vector>

std::vector<std::vector<int>> multiplyMatrices(
    std::vector<std::vector<int>> matrix1,
    std::vector<std::vector<int>> matrix2
) {
    // Rows and columns of given matrices
    int rows1 = matrix1.size();
    int rows2 = matrix2.size();
    int cols1 = matrix1[0].size();
    int cols2 = matrix2[0].size();

    // Validating matrix multiplication
    if (cols1 != rows2) {
        throw std::invalid_argument("Multiplication is impossible!");
    }

    // Initializing a resulting matrix
    std::vector<std::vector<int>> res(rows1, std::vector<int>(cols2));

    // Matrices multiplication
    for (int r1 = 0; r1 < rows1; r1++) {
        for (int c2 = 0; c2 < cols2; c2++) {
            int sum = 0;
            for (int i = 0; i < cols1; i++) {
                sum += (matrix1[r1][i] * matrix2[i][c2]);
            }
            res[r1][c2] = sum;
        }
    }

    return res;
}

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

    std::vector<std::vector<int>> res = multiplyMatrices(matrix1, matrix2);

    // Printing a resulting matrix
    for (const std::vector<int>& row : res) {
        for (int c : row) {
            std::cout << c << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
