#include "Point.h"

Point::Point() {
	_x = 0;
	_y = 0;
}
Point::Point(int x, int y) {
	_x = x;
	_y = y;
}
int Point::x() { return _x; }
int Point::y() { return _y; }
string Point::toString() {
	return to_string(_x) + " " + to_string(_y);
}
Point Point::parse(string buffer) {
	vector<string> tokens = Tokenizer::split(buffer);
	return Point(stoi(tokens[0]), stoi(tokens[1]));
}