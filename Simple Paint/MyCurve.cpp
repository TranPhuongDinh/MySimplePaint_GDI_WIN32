#pragma once
#include "MyCurve.h"

string MyCurve::type() {
	return "Curve";
}
string MyCurve::toString() {
	stringstream builder;
	builder << this->type() << ":" << _start.toString() << "," << _end.toString()
		<< "," << to_string(_lineWidth) << "," << to_string(_outlineColor);
	return builder.str();
}
MyCurve::MyCurve() {
	_start = Point(0, 0);
	_end = Point(0, 0);
	_lineWidth = 2;
	_outlineColor = 0;
}
MyCurve::MyCurve(Point start, Point end, int MylineWidth, DWORD outlineColor) {
	_start = start;
	_end = end;
	_lineWidth = MylineWidth;
	_outlineColor = outlineColor;
}
Point MyCurve::start() { return _start; }
Point MyCurve::end() { return _end; }
int MyCurve::lineWidth() { return _lineWidth; }
DWORD MyCurve::outlineColor() { return _outlineColor; }

MyCurve MyCurve::parse(string buffer) {
	vector<string> tokens = Tokenizer::split(buffer, ",");
	Point start = Point::parse(tokens[0]);
	Point end = Point::parse(tokens[1]);
	int lineWidth = stoi(tokens[2]);
	DWORD outlineColor = stoul(tokens[3]);
	return MyCurve(start, end, lineWidth, outlineColor);
}