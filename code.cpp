#include <bits/stdc++.h>
using namespace std;

// Function to perform Run-Length Encoding
string compressString(const string& input) {
    string result = "";
    int count = 1;

    for (size_t i = 1; i <= input.length(); i++) {
        if (input[i] == input[i - 1]) {
            count++;
        } else {
            result += input[i - 1] + to_string(count);/// convert into string
            count = 1;
        }
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a string to compress: ";
    getline(cin, input);  // Allows input with spaces

    string compressed = compressString(input);
    cout << " Compressed Output: " << compressed << endl;

    return 0;
}
