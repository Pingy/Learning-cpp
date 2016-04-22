#include <iostream>

using namespace std;

int integers() {

	int x = 3;
	int y = 5;
	int answer = x + y;
	cout << answer << endl;

	// Overriding the variables below
	x = 3;
	y = 1;
	answer = x + y;
	cout << answer << endl;

	x = 1;
	x = x + 1;
	cout << x << endl;


	return 0;
}