#include <iostream>
using namespace std;

const int N = 3;

void populateMainDiagonal(int matrix[N][N]) {
    for (int i = 0; i < N; ++i) {
        int sum = 0;
        for (int j = 0; j < N; ++j) {
            if (i + j == N - 1 || i == j) {
                sum += matrix[i][j];
            }
        }
        matrix[i][i] = sum;
    }
}

int main() {
    system("chcp 65001");
    int matrix[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    populateMainDiagonal(matrix);
    cout << "Матриця з оновленою головною діагоналлю:" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
