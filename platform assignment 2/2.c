//beautifull days at the movies
//https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem
int reverseNumber(int n) {
    int r = 0;
    while (n > 0) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}

int beautifulDays(int i, int j, int k) {
    int count = 0;
    for (int day = i; day <= j; day++) {
        int diff = day - reverseNumber(day);
        if (diff < 0) diff = -diff;
        if (diff % k == 0) count++;
    }
    return count;
}
