#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cin;
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::istringstream;
#include <fstream>
using std::ofstream;

int main() {
	cout << "Hello, World!" << endl;

	cout << "How wide of a box do you want?" << endl;

	int x;
	cin >> x;
	cout << "Width: " << x << endl;

	cout << "How tall of a box do you want?" << endl;


	int y;
	cin >> y;
	cout << "Height: " << y << endl;

	cout << "Filled (1), or Hollow? (2)" << endl;

	int h;
	cin >> h;

	if (h < 1, h>2)
	{
		cout << "that's not a one or two, exiting" << endl;
	}

	int xX = 0;
	int yY = 0;

	if (h < 2)
	{
		while (yY < y) {
			xX = 0;
			while (xX < x) {
				cout << "X";
				xX++;
			}
			cout << endl;
			yY++;
		}
	}

	else
	{
		while (xX < x)
		{
			cout << "X";
			xX++;
		}
		cout << endl;
		xX = 0;
		while (yY < y - 2)
		{
			xX = 0;

			cout << "X";
			while (xX < x - 2) {
				cout << " ";
				xX++;
			}

			cout << "X";
			cout << endl;
			yY++;
		}
		xX = 0;
		while (xX < x)
		{
			cout << "X";
			xX++;
		}
	}




	return 0;


}