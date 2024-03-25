#pragma once
#include "matrix.h"

template<typename T, size_t size>
class simpleMatrix : public Matrix<T, size, size> {
public:
	simpleMatrix(T(&inputData)[size][size]) : Matrix<T, size, size>(inputData) {}

	T maxElement() override {
		T maxElement = this->data[0][0];
		for (size_t i = 0; i < size; ++i) {
			for (size_t j = 0; j < size; ++j) {
				if (this->data[i][j] > maxElement) {
					maxElement = this->data[i][j];
				}
			}
		}
		return maxElement;
	}

	double norm() override {
		T sumOfSquares = 0.0;
		for (size_t i = 0; i < size; ++i) {
			for (size_t j = 0; j < size; ++j) {
				sumOfSquares += this->data[i][j] * this->data[i][j];
			}
		}
		return sqrt(sumOfSquares);
	}

	
};
