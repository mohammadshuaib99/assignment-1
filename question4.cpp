#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string reverseSecondHalf(const string& str) {
    int length = str.length();
    int halfLength = length / 2;

    string firstHalf = str.substr(0, halfLength);
    string secondHalf = str.substr(halfLength);
    reverse(secondHalf.begin(), secondHalf.end());

    return firstHalf + secondHalf;
}

int main() {
    string str1 = "abcdefgh";
    string str2 = "pwians";
    
    cout << "Input: " << str1 << endl;
    cout << "Output: " << reverseSecondHalf(str1) << endl;
    
    cout << "Input: " << str2 << endl;
    cout << "Output: " << reverseSecondHalf(str2) << endl;
    
    return 0;
}
