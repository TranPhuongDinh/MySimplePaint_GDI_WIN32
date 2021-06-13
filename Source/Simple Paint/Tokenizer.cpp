#pragma once
#include "Tokenizer.h"

vector<string> Tokenizer::split(const string &haystack, const string &needle) {
	vector<string> result;
	int startPos = 0;
	size_t foundPos = 0;

	while (1) {
		foundPos = haystack.find(needle, startPos);
		if (foundPos != string::npos) {
			string token = haystack.substr(startPos, foundPos - startPos);
			result.push_back(token);
			startPos = foundPos + needle.length();
		}
		else {
			string token = haystack.substr(startPos, haystack.length() - startPos);
			result.push_back(token);
			break;
		}
	}
	return result;
}
string Tokenizer::join(const vector<string>& haystack, const string& needle) {
	stringstream writer;
	for (int i = 0; i < haystack.size() - 1; i++) {
		writer << haystack[i] << needle;
	}
	writer << haystack.back();
	return writer.str();
}