#pragma once
#ifndef _DMK_CONSOLE_H
#define _DMK_CONSOLE_H

#include <vector>

#include "dataTypes.h"
#include "fastString.h"

namespace DMK {
	class Console {
	public:
		Console() {};
		~Console() {};

		void print(FastString line);
		template<typename T>
		void print(std::vector<T> arr);
		void println(FastString line);
		template<typename T>
		void println(std::vector<T> arr);

		FastString getLine();
		std::vector<FastString> getElements(UI32 count);

		static void oneTimePrint(FastString line);
		static void oneTimePrintln(FastString line);
	};
}

#define DMK_CONSOLE_PRINT(...)		::DMK::Console::oneTimePrint(__VA_ARGS__)
#define DMK_CONSOLE_PRINTLN(...)	::DMK::Console::oneTimePrintln(__VA_ARGS__)

#endif // !_DMK_CONSOLE_H
