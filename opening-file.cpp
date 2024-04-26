#include <iostream>
#include <fstream>
#include <sstream> 
#include <cctype> 
#include <algorithm> 
using namespace std;
string Reverse(const string& str) {
    string reversed;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}
string CapitalizeSecondLetter(const string& str) {
    string capitalized = str;
    bool isWordStart = true;

    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {
            if (isWordStart && i > 0) {
                capitalized[i] = toupper(str[i]);
            }
            isWordStart = false;
        } else {
            isWordStart = true;
        }
    }

    return capitalized;
}
int main() {
    string fileName = "file.txt";
    string fileData;
    ifstream infile(fileName);
    if (!infile.is_open()) {
        cerr << "Error opening file: " << fileName << endl;
        return 1;
    }
    getline(infile, fileData, '\0'); 
    infile.close();
    int vowelCount = 0;
    for (char c : fileData) {
        c = tolower(c); 
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowelCount++;
        }
    }
    int wordCount = 0;
    stringstream ss(fileData);
    string word;
    while (getline(ss, word, ' ')) {
        wordCount++;
    }
    string reversedString = Reverse(fileData);
    string capitalizedString = CapitalizeSecondLetter(fileData);
    cout << "Vowel count: " << vowelCount << endl;
    cout << "Word count: " << wordCount << endl;
    cout << "Reversed statement: " << reversedString << endl;
    cout << "Capitalized second letters: " << capitalizedString << endl;

    return 0;
}
