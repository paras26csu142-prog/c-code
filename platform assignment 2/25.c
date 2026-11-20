//Count Negative Numbers in a Sorted Matrix
//https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/description/
int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int count = 0;
    int row = 0;
    int col = gridColSize[0] - 1;   // start at the top-right corner

    while (row < gridSize && col >= 0) {
        if (grid[row][col] < 0) {
            // everything below in this column is also negative
            count += gridSize - row;
            col--;
        } else {
            row++;
        }
    }

    return count;
}

