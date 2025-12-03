#include <iostream>
using namespace std;       // i had this done on sunday but could not understand the reserving part

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    int seats[1000][1000]; 

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            seats[i][j] = 0;   
        }
    }

    cout << " CINEMA SEATING MAP "<<endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << seats[i][j] << " ";
            }
            cout << endl;
        }

}
