//remove element
//https://leetcode.com/problems/remove-element/description
int removeElement(int* nums, int numsSize, int val) {
    int k = 0;   // count of kept elements

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}
