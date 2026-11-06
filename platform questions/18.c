//Find Digits
//https://www.hackerrank.com/challenges/find-digits/problem
int findDigits(int n) {
    int sum = 0;
    int digit;
    int original = n;
 
    while (n > 0) {
        digit = n % 10;
 
        if (digit != 0 && original % digit == 0) {
            sum++;
        }
 
        n = n / 10;
    }
 
    return sum;
}

