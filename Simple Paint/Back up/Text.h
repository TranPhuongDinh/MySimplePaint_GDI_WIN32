#pragma once
#include "CommonLibrary.h"
#include "Framework.h"

class Text {
private:
	int _x;
	int _y;
	int _textLength;
	HFONT _hfont;
	DWORD _textColor;
	WCHAR* _textContent;
public:
	string type();
	string toString();
	Text();
	Text(int, int, int, HFONT, DWORD, WCHAR*);
	~Text();
	int x();
	int y();
	int textLength();
	HFONT hfont();
	DWORD textColor();
	WCHAR* textContent();
};