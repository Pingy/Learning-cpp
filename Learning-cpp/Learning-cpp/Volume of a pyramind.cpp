// Complex math 

#include "stdafx.h"
#include <iostream>

using namespace std;

int volume() {

	cout << "This program will calculate the volume of a prism\n" << endl;

	int length;
	int width;
	int height;

	cout << "Please enter a length in inches\n" << endl;
	cin >> length >> "\n";

	cout << "Please enter a width in inches\n" << endl;
	cin >> width >> "\n";

	cout << "Please enter a height in inches\n" << endl;
	cin >> height >> "\n";

	cout << "The volume of the cube is " << length * width * height << " inches cubed." << endl;

	system("pause");

	return 0;
}