#pragma once
#include "Shape.h"
#include "Point.h"
class MyLine : public Shape {
private:
	Point _start;
	Point _end;
	//MyLine width
	int _lineWidth;
	//color
	DWORD _outlineColor;
public:
	string type();
	string toString();
	MyLine();
	MyLine(Point, Point, int, DWORD);
	Point start();
	Point end();
	int lineWidth();
	DWORD outlineColor();
	static MyLine parse(string);
};