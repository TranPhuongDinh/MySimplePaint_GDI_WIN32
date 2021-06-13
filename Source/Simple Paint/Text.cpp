#include "Text.h"

Text::Text() {
	_x = 0;
	_y = 0;
	_textLength = 0;
	_hfont = NULL;
	_textColor = NULL;
	_textContent = NULL;
}
Text::Text(int x, int y, int textLength, HFONT hfont, DWORD textColor, WCHAR* textContent) {
	_x = x;
	_y = y;
	_textLength = textLength;
	_hfont = hfont;
	_textColor = textColor;
	_textContent = new WCHAR[_textLength];
	memcpy(_textContent, textContent, _textLength * sizeof(WCHAR));
}
Text::~Text() {
	free(_textContent);
}
int Text::x() { return _x; }
int Text::y() { return _y; }
int  Text::textLength() { return _textLength; }
HFONT Text::hfont() { return _hfont; }
DWORD Text::textColor() { return _textColor; }
WCHAR* Text::textContent() { return _textContent; }
