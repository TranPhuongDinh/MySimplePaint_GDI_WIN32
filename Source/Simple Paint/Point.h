#pragma once
#include "CommonLibrary.h"
#include "Tokenizer.h"
class Point {
private:
	int _x;
	int _y;
public:
	Point();
	Point(int, int);
	int x();
	int y();
	string toString();
	static Point parse(string buffer);
};