#include <iostream>
#include <sstream>      // for std::ostringstream
#include "box.hpp"
#include <string>       // for std::string

using std::cout;
using std::endl;


Box::Box(void) :_Height(1), _Width(1), _Filled(true)
{
	cout << "I made a default box and set it to " << _Height << " x " << _Width << " and " << _Filled << " !" << endl; //visible Constructor
}
Box::Box(int x, int y, bool f)
{
	_Height = y;
	_Width = x;
	_Filled = f;
	cout << "I made a box and set it to " << _Height << " x " << _Width << " and " << _Filled << " !" << endl; //visible Constructor
}
Box::Box(int x, int y)
{
	_Height = y;
	_Width = x;
	_Filled = true;
	cout << "I made a box and set it to " << _Height << " x " << _Width << " and " << _Filled << " !" << endl; //visible Constructor
}
Box::~Box(void)
{
	cout << "I Unmade a box!" << endl; //visible Destructor
}

void Box::setWidth(int width)
{
	_Width = width;
}
void Box::setHeight(int height)
{
	_Height = height;
}
int Box::getWidth() const
{
	int width = _Width;
	return width;
}
int Box::getHeight() const
{
	int height = _Height;
	return height;
}

std::string Box::type() const
{
	std::string type;
	if (_Filled == true)
		type = "Filled";
	else
		type = "Hollow";
	return type;
}

//void Box::print(void) const
//{
//	int xX = 0;
//	int yY = 0;
//
//	if (_Filled == true)
//	{
//		while (yY < _Height) 
//		{
//			xX = 0;
//			while (xX < _Width) 
//			{
//				cout << "X";
//				xX++;
//			}
//			cout << endl;
//			yY++;
//		}
//	}
//
//	else
//	{
//		while (xX < _Width)
//		{
//			cout << "X";
//			xX++;
//		}
//		cout << endl;
//		xX = 0;
//		while (yY < _Height - 2)
//		{
//			xX = 0;
//
//			cout << "X";
//			while (xX < _Width - 2) 
//			{
//				cout << " ";
//				xX++;
//			}
//
//			cout << "X";
//			cout << endl;
//			yY++;
//		}
//		xX = 0;
//		while (xX < _Width)
//		{
//			cout << "X";
//			xX++;
//		}
//	}
//}

void Box::print(std::ostream & output) const
{
	int xX = 0;
	int yY = 0;

	if (_Filled == true)
	{
		while (yY < _Height)
		{
			xX = 0;
			while (xX < _Width)
			{
				output << "X";
				xX++;
			}
			output << endl;
			yY++;
		}
	}

	else
	{
		while (xX < _Width)
		{
			output << "X";
			xX++;
		}
		output << endl;
		xX = 0;
		while (yY < _Height - 2)
		{
			xX = 0;

			output << "X";
			while (xX < _Width - 2)
			{
				output << " ";
				xX++;
			}

			output << "X";
			output << endl;
			yY++;
		}
		xX = 0;
		while (xX < _Width)
		{
			output << "X";
			xX++;
		}
	}

}