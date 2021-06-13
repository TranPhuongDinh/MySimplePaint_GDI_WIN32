#pragma once
#include "MyLine.h"

string MyLine::type() {
	return "Line";
}
string MyLine::toString() {
	stringstream builder;
	builder << this->type() << ":" << _start.toString() << "," << _end.toString()
		<< "," << to_string(_lineWidth) << "," << to_string(_outlineColor);
	return builder.str();
}
MyLine::MyLine() {
	_start = Point(0, 0);
	_end = Point(0, 0);
	_lineWidth = 2;
	_outlineColor = 0;
}
MyLine::MyLine(Point start, Point end, int MyLineWidth, DWORD outlineColor) {
	_start = start;
	_end = end;
	_lineWidth = MyLineWidth;
	_outlineColor = outlineColor;
}
Point MyLine::start() { return _start; }
Point MyLine::end() { return _end; }
int MyLine::lineWidth() { return _lineWidth; }
DWORD MyLine::outlineColor() { return _outlineColor; }

MyLine MyLine::parse(string buffer) {
	vector<string> tokens = Tokenizer::split(buffer, ",");
	Point start = Point::parse(tokens[0]);
	Point end = Point::parse(tokens[1]);
	int lineWidth = stoi(tokens[2]);
	DWORD outlineColor = stoul(tokens[3]);
	return MyLine(start, end, lineWidth, outlineColor);
}