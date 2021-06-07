#pragma once
#include "CommonLibrary.h"

class Tokenizer {
public:
	static vector<string> split(const string&, const string& = " ");
	static string join(const vector<string>&, const string& = " ");
};