#pragma once
#include "upper_triangular_matrix.h"

template<typename T, size_t size>
class UpperTriangularMatrix : public Matrix<T, size, size> {
public:
    UpperTriangularMatrix( T(&inputData)[size][size]) : Matrix<T, size, size>(inputData) {}

    T maxElement()  override {
        T maxElement = this->data[0][0];
        for (size_t i = 0; i < size; ++i) {
            for (size_t j = i; j < size; ++j) {
                if (this->data[i][j] > maxElement) {
                    maxElement = this->data[i][j];
                }
            }
        }
        return maxElement;
    }
};

