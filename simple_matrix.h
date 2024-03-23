#pragma once
#include <iostream>
#include <cmath>
using namespace std;

template <typename T, size_t rows, size_t cols>
class Matrix {
protected:
	T data[rows][cols];

public:
    Matrix(const T(&inputData)[rows][cols]) {
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                data[i][j] = inputData[i][j];
            }
        }
    }

    virtual T maxElement() {
        T maxElement = data[0][0];
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                if (data[i][j] > maxElement) {
                    maxElement = data[i][j];
                }
            }
        }
        return maxElement;
    }

    virtual double norm() {
        double sumOfSquares = 0.0;
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                sumOfSquares += data[i][j] * data[i][j];
            }
        }
        return sqrt(sumOfSquares);
    }

    friend ostream& operator<<(ostream& os, const Matrix& matrix) {
		for (size_t i = 0; i < rows; ++i) {
			for (size_t j = 0; j < cols; ++j) {
				os << matrix.data[i][j] << " ";
			}
			os << endl;
		}
		return os;
	}

    friend istream & operator>>(istream& is, Matrix& matrix) {
        for (size_t i = 0; i < rows; ++i) {
			for (size_t j = 0; j < cols; ++j) {
				is >> matrix.data[i][j];
			}
		}
		return is;
	}
};