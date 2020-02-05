#include <vector>
#include "matrix.h"
#include "dataTypes.h"

namespace DMK {
	template<typename T>
	Matrix<T>::Matrix(std::vector<std::vector<T>> matrix) : myMatrix(matrix) {
		myRows = matrix.size();
		myCols = matrix[myRows - 1].size();
	}

	template<typename T>
	void Matrix<T>::add(std::vector<std::vector<T>> matrix) {
		if (!matrix.size())
			return;
		if (myRows != matrix.size() || myCols != matrix[0].size())
			return;

		for (UI32 row = 0; row < myRows; row++)
			for (UI32 col = 0; col < myCols; col++)
				myMatrix[row][col] += matrix[row][col];
	}

	template<typename T>
	void Matrix<T>::subtract(std::vector<std::vector<T>> matrix) {
		if (!matrix.size())
			return;
		if (myRows != matrix.size() || myCols != matrix[0].size())
			return;

		for (UI32 row = 0; row < myRows; row++)
			for (UI32 col = 0; col < myCols; col++)
				myMatrix[row][col] -= matrix[row][col];
	}

	template<typename T>
	void Matrix<T>::multiply(UI32 value) {
		for (UI32 row = 0; row < myRows; row++)
			for (UI32 col = 0; col < myCols; col++)
				myMatrix[row][col] *= value;
	}

	template<typename T>
	void Matrix<T>::multiply(std::vector<std::vector<T>> matrix) {
		if (!matrix.size())
			return;
		if (myCols != matrix.size())
			return;

		std::vector<std::vector<T>> _tempMat(myRow, std::vector<T>(matrix[0].size()));

		for (UI32 row = 0; row < myRows; row++) {
			for (UI32 col = 0; col < myCols; col++) {
				_tempMat[row][col] = (myMatrix[row][col] * matrix[col][row]);
			}
		}
	}

	template<typename T>
	void Matrix<T>::divide(std::vector<std::vector<T>> matrix) {
	}
}