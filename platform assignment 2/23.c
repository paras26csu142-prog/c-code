//Matrix Diagonal Sum
//https://leetcode.com/problems/matrix-diagonal-sum/description/
int diagonalSum(int** mat, int matSize, int* matColSize) {
    int sum = 0;

    for (int i = 0; i < matSize; i++) {
        sum += mat[i][i];                  // primary diagonal
        sum += mat[i][matSize - 1 - i];    // secondary diagonal
    }

    // for odd sizes, the center cell was counted twice
    if (matSize % 2 == 1) {
        sum -= mat[matSize / 2][matSize / 2];
    }

    return sum;
}
