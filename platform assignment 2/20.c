//Valid Anagram
//https://leetcode.com/problems/valid-anagram/description/
bool isAnagram(char* s, char* t) {
    int count[26] = {0};

    // lengths must match for an anagram
    if (strlen(s) != strlen(t)) {
        return false;
    }

    // add counts for s, subtract counts for t
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    // all counts must be zero
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}
