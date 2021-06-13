#pragma once
#include "Shape.h"
#include "Point.h"
class MyCurve : public Shape {
private:
	Point _start;
	Point _end;
	//MyCurve width
	int _lineWidth;
	//color
	DWORD _outlineColor;
public:
	string type();
	string toString();
	MyCurve();
	MyCurve(Point, Point, int, DWORD);
	Point start();
	Point end();
	int lineWidth();
	DWORD outlineColor();
	static MyCurve parse(string);
};