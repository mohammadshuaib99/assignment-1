#include <iostream>
#include <string>

using namespace std;

bool isConsonant(char ch) {
    ch = tolower(ch); // Convert to lowercase for case-insensitive check
    return (ch >= 'a' && ch <= 'z' && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u');
}

int countConsonants(string str) {
    int count = 0;
    
    for (char ch : str) {
        if (isConsonant(ch)) {
            count++;
        }
    }
    
    return count;
}

int main() {
    string str1 = "pwians";
    string str2 = "abdc";
    
    cout << "Input: " << str1 << endl;
    cout << "Output: " << countConsonants(str1) << endl;
    
    cout << "Input: " << str2 << endl;
    cout << "Output: " << countConsonants(str2) << endl;
    
    return 0;
}
