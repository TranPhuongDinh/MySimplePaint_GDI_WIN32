#pragma once
#include "Shape.h"
#include "Point.h"
class MyEllipse : public Shape {
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
	MyEllipse();
	MyEllipse(Point, Point, int, DWORD, DWORD);
	Point topLeft();
	Point rightBottom();
	int lineWidth();
	DWORD outlineColor();
	DWORD fillColor();
	static MyEllipse parse(string);
}; 
