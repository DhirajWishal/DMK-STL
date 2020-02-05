#include <string>
#include "fastString.h"

namespace DMK {
	FastString::FastString() {
	}

	FastString::FastString(std::string str) : myString(str.data()) {
	}

	FastString::FastString(const char* str) : myString((char*)str) {
	}

	std::string FastString::str() {
		return myString;
	}
	
	char* FastString::data() {
		return myString;
	}
	
	const char* FastString::c_str() {
		return myString;
	}

	void FastString::clear() {
		myString = nullptr;
	}
	
	FastString FastString::operator=(std::string& str) {
		this->myString = str.data();
		return *this;
	}
	
	FastString FastString::operator=(char* str) {
		this->myString = str;
		return *this;
	}
}