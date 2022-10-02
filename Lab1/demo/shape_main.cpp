#include <iostream>
using namespace std;

int main() {
    string inputType;
    cout << "Please input struct type, it could be Rectangle or Triangle." << endl;
    cin >> inputType;

    if (inputType == "Triangle") {
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
    cout << "Struct type: Triangle. Area: " << 0.866 * base << endl;
    }
}

else if (inputType == "Rectangle") {
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
    cout << "Struct type: Rectangle. Area: " << width * height << endl;
}
else {
cout << "you have input the wrong data type!" << endl;
}

cout << "Program end." << endl;
