#include <iostream>
using namespace std;
int main() {
    string password;
    while (true) {
        cout << "Enter password: ";
        cin >> password;
        if (password == "Python123") {
            cout << "Correct Password" << endl;
            break;
        }
        else {
            cout << "Wrong Password" << endl;
        }
    }
    return 0;
}
