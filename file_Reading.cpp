#include <fstream>
#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::ifstream;

int main() {
    ifstream my_file;
    my_file.open("files/1.board");
    if (my_file) {
        cout << "The file stream has been created!" << "\n";
        string line;
        while (getline(my_file, line)) {
            cout << line << "\n";
        }
    }
}
