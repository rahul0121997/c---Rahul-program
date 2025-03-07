#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str) {
    int left = 0;
    int right = str.length() - 1;

    // Compare characters from both ends moving towards the center
    while (left < right) {
        if (str[left] != str[right]) {
            return false; // If characters don't match, it's not a palindrome
        }
        left++;
        right--;
    }
    return true; // If all characters matched, it's a palindrome
}

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "The string is a palindrome!" << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
