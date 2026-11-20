//First Unique Character in a String
//https://leetcode.com/problems/first-unique-character-in-a-string/description/
int firstUniqChar(char* s) {
    int freq[26] = {0};

    // first pass: count each letter
    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }

    // second pass: find the first letter with count 1
    for (int i = 0; s[i] != '\0'; i++) {
        if (freq[s[i] - 'a'] == 1) {
            return i;
        }
    }

    return -1;
}
