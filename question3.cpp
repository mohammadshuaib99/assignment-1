#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    
    return str == reversed;
}

int main() {
    string input1 = "abcde";
    string input2 = "abcdcba";
    
    cout << "Input: " << input1 << endl;
    cout << "Output: " << (isPalindrome(input1) ? "Yes" : "No") << endl;

    cout << "Input: " << input2 << endl;
    cout << "Output: " << (isPalindrome(input2) ? "Yes" : "No") << endl;

    return 0;
}
