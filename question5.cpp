#include <iostream>
#include <string>

using namespace std;

int stringToInteger(const string& str) {
    int result = 0;
    
    for (char c : str) {
        result = result * 10 + (c - '0');
    }
    
    return result;
}

int main() {
    string input1 = "3244";
    string input2 = "12";
    
    cout << "Input: " << input1 << endl;
    cout << "Output: " << stringToInteger(input1) << endl;
    
    cout << "Input: " << input2 << endl;
    cout << "Output: " << stringToInteger(input2) << endl;
    
    return 0;
}
