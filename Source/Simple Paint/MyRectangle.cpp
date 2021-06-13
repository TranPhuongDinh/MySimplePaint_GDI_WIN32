#pragma once
#include "MyRectangle.h"

string MyRectangle::type() {
	return "Rectangle";
}
string MyRectangle::toString() {
	stringstream builder;
	builder << this->type() << ":" << _topLeft.toString() << "," << _rightBottom.toString()
		<< "," << to_string(_lineWidth) << "," << to_string(_outlineColor) + "," + to_string(_fillColor);
	return builder.str();
}
MyRectangle::MyRectangle() {
	_topLeft = Point(0, 0);
	_rightBottom = Point(0, 0);
	_lineWidth = 2;
	_outlineColor = 0;
	_fillColor = -1;
}
MyRectangle::MyRectangle(Point topLeft, Point rightBottom, int MyRectangleWidth, DWORD outlineColor, DWORD fillColor) {
	_topLeft = topLeft;
	_rightBottom = rightBottom;
	_lineWidth = MyRectangleWidth;
	_outlineColor = outlineColor;
	_fillColor = fillColor;
}
Point MyRectangle::topLeft() { return _topLeft; }
Point MyRectangle::rightBottom() { return _rightBottom; }
int MyRectangle::lineWidth() { return _lineWidth; }
DWORD MyRectangle::outlineColor() { return _outlineColor; }
DWORD MyRectangle::fillColor() { return _fillColor; }

MyRectangle MyRectangle::parse(string buffer) {
	vector<string> tokens = Tokenizer::split(buffer, ",");
	Point topLeft = Point::parse(tokens[0]);
	Point rightBottom = Point::parse(tokens[1]);
	int lineWidth = stoi(tokens[2]);
	DWORD outlineColor = stoul(tokens[3]);
	DWORD fillColor = stoul(tokens[4]);
	return MyRectangle(topLeft, rightBottom, lineWidth, outlineColor, fillColor);
}
