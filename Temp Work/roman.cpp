#include <iostream>
#include <vector>
#include <string>

using namespace std;

string intToRoman(int num) {
    // Pairing values with their Roman symbols in descending order
    // Including subtractive cases like 4 (IV) and 9 (IX)
    vector<pair<int, string>> mapping = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };

    string result = "";
    
    for (auto const& [value, symbol] : mapping) {
        // While the current number is larger than the Roman value, append symbol
        while (num >= value) {
            result += symbol;
            num -= value;
        }
    }
    return result;
}

int main() {
    int start, end;

    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    // Standard Roman numerals usually go from 1 to 3999
    if (start < 1 || end > 3999 || start > end) {
        cout << "Please enter a valid range between 1 and 3999." << endl;
        return 1;
    }

    cout << "\nInteger -> Roman Conversion:\n";
    cout << "----------------------------\n";
    for (int i = start; i <= end; i++) {
        cout << i << "\t->\t" << intToRoman(i) << endl;
    }

    return 0;
}