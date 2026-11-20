//. Find Numbers with Even Number of Digits
//https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/
int findNumbers(int* nums, int numsSize) {
    int count = 0;

    for (int i = 0; i < numsSize; i++) {
        int n = nums[i];
        int digits = 0;

        while (n > 0) {
            digits++;
            n /= 10;
        }

        if (digits % 2 == 0) {
            count++;
        }
    }

    return count;
}

