//move zeroes
//https://leetcode.com/problems/move-zeroes/description/
void moveZeroes(int* nums, int numsSize) {
    int pos = 0;   // next slot for a non-zero value

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            int temp = nums[pos];
            nums[pos] = nums[i];
            nums[i] = temp;
            pos++;
        }
    }
}
