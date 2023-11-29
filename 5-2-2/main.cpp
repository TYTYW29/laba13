#include <iostream>
using namespace std;
const int N = 3;
int productOfNegatives(int matrix[N][N]) {
    int product = 1;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (matrix[i][j] < 0) {
                product *= matrix[i][j];
            }
        }
    }

    return product;
}
int main() {
    system("chcp 65001");
    int matrix[N][N] = {{1, -2, 3}, {4, -5, 6}, {-7, 8, -9}};
    int result = productOfNegatives(matrix);
    cout << "Добуток від'ємних елементів матриці: " << result << endl;
    return 0;
}
