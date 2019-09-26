#pragma once
#ifndef BOX_BOX_H
#define BOX_BOX_H


class Box {
public:
	void setWidth(int Width); //set the width of the box
	int getWidth() const; //return the width of the box
	void setHeight(int Height); //set the Height of the box
	int getHeight() const; //return the Height of the box
	void print() const; //print a box
	Box();  // This is the constructor
	Box(int, int, bool);  // This is the constructor
	~Box();  // This is the destructor
	//Box(const Line &original); // This is the copy constructor
private:
	int _Height;
	int _Width;
	bool _Filled;
};

#endif //BOX_BOX_H