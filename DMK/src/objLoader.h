#pragma once
#ifndef _DMK_OBJ_LOADER_H
#define _DMK_OBJ_LOADER_H

#include <string>
#include <fstream>

namespace DMK {
	class ObjFile {
	public:
		ObjFile() {}
		ObjFile(std::string_view path) : myPath(path) {}
		~ObjFile();

		void load();
		void close();

	private:
		std::string_view myPath = "";
		std::ifstream myFile;
		bool isClosed = false;
	};
}

#endif // !_DMK_OBJ_LOADER_H
