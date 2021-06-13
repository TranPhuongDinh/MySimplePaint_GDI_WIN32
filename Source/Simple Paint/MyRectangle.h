#pragma once
#include "Shape.h"
#include "Point.h"

class MyRectangle : public Shape {
private:
	Point _topLeft;
	Point _rightBottom;
	//line width
	int _lineWidth;
	//color
	DWORD _outlineColor;
	DWORD _fillColor;
public:
	string type();
	string toString();
	MyRectangle();
	MyRectangle(Point, Point, int, DWORD, DWORD);
	Point topLeft();
	Point rightBottom();
	int lineWidth();
	DWORD outlineColor();
	DWORD fillColor();
	static MyRectangle parse(string);
};