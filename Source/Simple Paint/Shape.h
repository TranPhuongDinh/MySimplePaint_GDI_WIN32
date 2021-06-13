#pragma once
#include "CommonLibrary.h"
#include "Tokenizer.h"
#include "framework.h"
class Shape {
public:
	virtual string type() = 0;
	virtual string toString() = 0;
};