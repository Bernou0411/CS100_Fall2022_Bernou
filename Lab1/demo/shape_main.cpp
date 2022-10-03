#include <iostream>
#include "../demo/triangle.hpp"
#include "../header/rectangle.hpp"
using namespace std;

int main() {
    string inputType;
    cout << "Please input struct type, it could be Rectangle or Triangle." << endl;
    cin >> inputType;

    if (inputType == "Triangle") {
    Triangle tri1;
    cout << "Please input base..." << endl;
    int base;
    cin >> base;
    while (cin.fail()) {
	    cout << "Wrong, you have inputed a wrong type data.\n" << endl;
	    cin.clear();
	    while(cin.get() != '\n') {
		    continue;
	    }
	    cout << "Please try again!" << endl;
	    cin >> base;
    }
    tri1.set_base(base);
    cout << "Struct type: Triangle. Area: " << tri1.area()  << endl;
    }

else if (inputType == "Rectangle") {
    Rectangle rec1;
    cout << "Please input width..." << endl;
    int width;
    cin >> width;
    while(cin.fail()) {
	cout << "Wrong, you have inputed a wrong type data.\n" << endl;
	cin.clear();
	while(cin.get() != '\n') {
        continue;
	}
	cout << "please try again!" << endl;
	cin >> width;
    }
    rec1.set_width(width);
    cout << "Please input height..." << endl;
    int height;
    cin >> height;
    while (cin.fail()) {
	    cout << "Wrong, you have inputed a wrong type data.\n" << endl;
	    cin.clear();
	    while(cin.get() != '\n') {
            continue;
	    }
	    cout << "Please try again!" << endl;
	    cin >> height;
    } 
    rec1.set_height(height);
    cout << "Struct type: Rectangle. Area: " << width * height << endl;
}

else {
cout << "you have input the wrong data type!" << endl;
}

cout << "Program end." << endl;

return 0;
}
