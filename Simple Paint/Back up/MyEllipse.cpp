#pragma once
#include "MyEllipse.h"

string MyEllipse::type() {
	return "Ellipse";
}
string MyEllipse::toString() {
	stringstream builder;
	builder << this->type() << ":" << _topLeft.toString() << "," << _rightBottom.toString()
		<< "," << to_string(_lineWidth) << "," << to_string(_outlineColor) + "," + to_string(_fillColor);
	return builder.str();
}
MyEllipse::MyEllipse() {
	_topLeft = Point(0, 0);
	_rightBottom = Point(0, 0);
	_lineWidth = 2;
	_outlineColor = 0;
	_fillColor = -1;
}
MyEllipse::MyEllipse(Point topLeft, Point rightBottom, int MyEllipseWidth, DWORD outlineColor, DWORD fillColor) {
	_topLeft = topLeft;
	_rightBottom = rightBottom;
	_lineWidth = MyEllipseWidth;
	_outlineColor = outlineColor;
	_fillColor = fillColor;
}
Point MyEllipse::topLeft() { return _topLeft; }
Point MyEllipse::rightBottom() { return _rightBottom; }
int MyEllipse::lineWidth() { return _lineWidth; }
DWORD MyEllipse::outlineColor() { return _outlineColor; }
DWORD MyEllipse::fillColor() { return _fillColor; }
MyEllipse MyEllipse::parse(string buffer) {
	vector<string> tokens = Tokenizer::split(buffer, ",");
	Point topLeft = Point::parse(tokens[0]);
	Point rightBottom = Point::parse(tokens[1]);
	int lineWidth = stoi(tokens[2]);
	DWORD outlineColor = stoul(tokens[3]);
	DWORD fillColor = stoul(tokens[4]);
	return MyEllipse(topLeft, rightBottom, lineWidth, outlineColor, fillColor);
}