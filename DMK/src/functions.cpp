#include <vector>
#include <string>
#include <iostream>
#include "functions.h"

namespace DMK {
	void print(std::string_view string) {
		printf(string.data());
	}

	void println(std::string_view string) {
		printf("%s\n", string.data());
	}

	std::string get() {
		const char* _localString = "";
		std::scanf("%s", &_localString);
		return _localString;
	}

	std::string getln() {
		std::string _localString = "";
		std::getline(std::cin, _localString, '\n');
		return _localString;
	}
}