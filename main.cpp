#include "simple_matrix.h"
#include "identity_matrix.h"
#include "upper_triangular_matrix.h"

int main() {

	const size_t size = 3;

	double identityData[size][size] = { {0.0, 0.0, 0.0}, {0, 0, 0}, {0, 0, 0} };
	IdentityMatrix<double, size> identityMatrix;

	double maxElement = identityMatrix.maxElement();
	cout << "Max el " << maxElement << endl;

	double norm = identityMatrix.norm();
	cout << "Norm " << norm << endl;

	double upperTriangularData[size][size] = { {8.0, 2.0, 3.0}, {1, 4.0, 5.0}, {0, 0, 6.0} };
	UpperTriangularMatrix<double, size> upperTriangularMatrix(upperTriangularData);

	double maxElement1 = upperTriangularMatrix.maxElement();
	cout << "Max el " << maxElement1 << endl;

	double norm1 = upperTriangularMatrix.norm();
	cout << "Norm " << norm1 << endl;

}