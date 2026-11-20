//to lower case
//https://leetcode.com/problems/to-lower-case/description/
char* toLowerCase(char* s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;  // 'a' - 'A' = 32
        }
    }

    return s;
}
