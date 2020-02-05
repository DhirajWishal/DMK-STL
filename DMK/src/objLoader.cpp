#include <fstream>
#include <vector>
#include <string>
#include <cstdint>
#include "objLoader.h"

namespace DMK {
	ObjFile::~ObjFile() {
		if (!isClosed)
			close();
	}

	void ObjFile::load() {
		myFile.open(myPath.data());
		if (myFile.is_open())
			return;
	}

	void ObjFile::close() {
		myFile.close();
		isClosed = true;
	}
}