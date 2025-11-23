#include <iostream>
using namespace std;
int main() {
    int Temp;
    cout << "Enter Temperature: ";
    cin>> Temp;
    Temp = (Temp * 9 / 5) + 32;
    cout << "Temperature in Ferenheit: " << Temp;
return 0;
}
