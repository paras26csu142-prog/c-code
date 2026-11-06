//Count the Digits That Divide a Number
//https://leetcode.com/problems/count-the-digits-that-divide-a-number/description/
int countDigits(int num) {
    int original = num;
    int digit;
    int count = 0;
 
    while (num > 0) {
        digit = num % 10;
 
        if (digit != 0 && original % digit == 0) {
            count++;
        }
 
        num = num / 10;
    }
 
    return count;
 
}

