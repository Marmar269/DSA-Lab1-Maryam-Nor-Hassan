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

