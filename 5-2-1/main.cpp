#include <iostream>
using namespace std;
const int N = 3;
const int Z = 5;
void countElementsAboveZ(int matrix[N][N]) {
    for (int i = 0; i < N; ++i) {
        int count = 0;
        for (int j = 0; j < N; ++j) {
            if (matrix[i][j] > Z) {
                count++;
            }
        }
        cout << "У рядку " << i + 1 << " елементів більше за " << Z << ": " << count << endl;
    }
}
int main() {
    system("chcp 65001");
    int matrix[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    countElementsAboveZ(matrix);
    return 0;
}