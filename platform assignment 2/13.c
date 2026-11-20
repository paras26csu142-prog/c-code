//. Length of Last Word
//https://leetcode.com/problems/length-of-last-word/description/
int lengthOfLastWord(char* s) {
    int i = strlen(s) - 1;
    int length = 0;

    // skip trailing spaces
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // count characters of the last word
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
}
