#include <iostream>
#include <string>
#include "console.h"

namespace DMK {
	void Console::print(FastString line) {
		printf("%s", line.c_str());
	}

	void Console::println(FastString line) {
		printf("%s\n", line.c_str());
	}

	FastString Console::getLine() {
		std::string _temp;
		std::getline(std::cin, _temp, '\n');
		return _temp;
	}

	std::vector<FastString> Console::getElements(UI32 count) {
		std::vector<FastString> _temp;
		std::string _tempContainer;

		while (count--) {
			std::getline(std::cin, _tempContainer, '\n');
			_temp.push_back(_tempContainer);
		}

		return _temp; 
	}

	void Console::oneTimePrint(FastString line) {
		printf("%s", line.c_str());
	}

	void Console::oneTimePrintln(FastString line) {
		printf("%s\n", line.c_str());
	}

	template<typename T>
	void Console::print(std::vector<T> arr) {
		for (T _elem : arr)
			std::cout << _elem << " ";
	}

	template<typename T>
	void Console::println(std::vector<T> arr) {
		for (T _elem : arr)
			std::cout << _elem << "\n";
	}
}