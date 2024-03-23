#pragma once
#include "simple_matrix.h"

template<typename T, size_t size>
class IdentityMatrix : public Matrix<T, size, size> {
public:
    IdentityMatrix() : Matrix<T, size, size>({ {} }) {
        for (size_t i = 0; i < size; ++i) {
            this->data[i][i] = 1; 
        }
    }
};