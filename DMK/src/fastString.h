#pragma once
#ifndef _DMK_FAST_STRING_H
#define _DMK_FAST_STRING_H

#include <string>

namespace DMK {
	class FastString {
	public:
		FastString();
		FastString(std::string str);
		FastString(const char* str);

		std::string str();
		char* data();
		const char* c_str();

		void clear();

		FastString operator=(std::string& str);
		FastString operator=(char* str);
		FastString operator=(const char* str);

	private:
		char* myString = nullptr;
	};
}

#endif // !_DMK_FAST_STRING_H
