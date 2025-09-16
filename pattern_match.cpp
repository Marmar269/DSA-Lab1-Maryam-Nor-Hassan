#include <iostream>
#include <string>
using namespace std;

int findFirstOccurrence(const string& text, const string& pattern) {
    int n = text.length();
    int m = pattern.length();

    if (m == 0) {
        return 0;
    }
    if (m > n) {
        return -1;
    }

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == m) {
            return i;
        }
    }
    return -1;
}

int main() {
    string text, pattern;

    cout << "Enter the text: ";
    getline(cin, text);

    cout << "Enter the pattern: ";
    getline(cin, pattern);

    int result = findFirstOccurrence(text, pattern);

    if (result == -1)
        cout << "Pattern not found.\n";
    else
        cout << "Pattern found at index: " << result << "\n";

    return 0;
}

// -----------------------------------------------------------------------------
// How this program works (Naive String Pattern Matching):
//
// 1) It asks the user to enter two strings:
//       • text    → the main string to search in
//       • pattern → the smaller string we want to find
//
// 2) The function findFirstOccurrence() checks every possible starting
//    position in the text. For each position, it compares the characters
//    of the pattern with the corresponding characters of the text.
//
// 3) If all characters of the pattern match, it returns the index of that
//    position (0-based index).
//
// 4) If no position matches, the function returns -1.
//
// 5) Special cases handled:
//       • Empty pattern → return 0 (an empty string is found at the start).
//       • Pattern longer than text → return -1 immediately.
//
// Example:
//     text    = "hello world"
//     pattern = "world"
//     Result  = 6 (because "world" begins at index 6 in "hello world").
//
// -----------------------------------------------------------------------------
