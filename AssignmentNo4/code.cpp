#include <fstream>
#include <iostream>
using namespace std;

int main() {
    fstream file;
    file.open("advait.txt", ios::out);
    if (!file) {
        cout << "Error in creating file" << endl;
        return 0;
    }
    cout << "File created successfully." << endl;
    file << "Advait.is.the.best.programmer.alive";
    file.close();
    file.open("advait.txt", ios::in);
    if (!file) {
        cout << "Error in opening file" << endl;
        return 0;
    }
    char ch;
    cout << "File content: ";
    while (!file.eof()) {
        file >> ch;
        cout << ch;
    }
    file.close();
    return 0;
}
