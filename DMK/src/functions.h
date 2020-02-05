#pragma once
#ifndef _DMK_FUNCTIONS_H
#define _DMK_FUNCTIONS_H

#include <string>

namespace DMK {
	// print a string to the console
	void print(std::string_view string);

	// print a string to the console and jump to the next line
	void println(std::string_view string);

	// get a string from the console
	std::string get();

	// get a full line from the console
	std::string getln();
}

#endif // !_DMK_FUNCTIONS_H
