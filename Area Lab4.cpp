#include <iostream>
using namespace std;
int main() {
    bool loopRun= true;
    while (loopRun) {
        cout << "\nPress 1 to find the Area of a Circle \nPress 2 to find Area of a Rectangle \nPress 3 to find the Area of a Triangle \nPress 4 to Exit the Program";
        int option;
        cin >> option;
        switch (option) {
            case 1: {
                float radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                float area= radius * radius * 3.14;
                cout << "\nArea of the circle is: " << area;
                break;
            }
                case 2: {
                float height;
                float width;
                cout << "Enter the height of the rectangle: ";
                cin >> height;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                float area= height * width;
                cout << "\nArea of the rectangle is: " << area;
                break;
            }
                case 3: {
                float height;
                float base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                float area= 0.5 * base * height;
                cout << "\nArea of the triangle is: " << area;
                break;
            }
                case 4: {
                cout << "Exiting the Program";
                loopRun = false;
                break;
            }
                default: cout << "\nEnter a valid input\n"; break;
        }

    }
    return 0;
}
