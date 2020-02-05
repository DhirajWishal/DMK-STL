#pragma once
#ifndef _DMK_MATRIX_H
#define _DMK_MATRIX_H

#include <vector>
#include "dataTypes.h"

namespace DMK {
	template<typename T>
	class Matrix {
	public:
		Matrix() {}
		Matrix(Matrix<T>& mat) : myMatrix(mat.myMatrix) {}
		Matrix(std::vector<std::vector<T>> matrix);
		~Matrix() {}

		void set(Matrix<T> mat) { myMatrix = mat.myMatrix; }
		void set(std::vector<std::vector<T>> mat) { myMatrix = mat; }

		void add(std::vector<std::vector<T>> matrix);
		void subtract(std::vector<std::vector<T>> matrix);
		void multiply(UI32 value);
		void multiply(std::vector<std::vector<T>> matrix);
		void divide(std::vector<std::vector<T>> matrix);

		std::vector<std::vector<T>> get() { return myMatrix; }

		Matrix& operator+(Matrix& mat) {
			this->add(mat.get());
			return *this;
		}

		Matrix& operator+(std::vector<std::vector<T>>& mat) {
			this->add(mat);
			return *this;
		}

	private:
		std::vector<std::vector<T>> myMatrix = { {} };

		UI32 myRows = 0;
		UI32 myCols = 0;
	};
}

#endif // !_DMK_MATRIX_H