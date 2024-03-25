#include "matrix.h"
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

	float simpleData[size][size] = { {1.0, 2.0, 3.0}, {4.0, 5.0, 6.0}, {7.0, 8.0, 9.0} };
	simpleMatrix<float, size> simpleMatrix(simpleData);

	float maxElement2 = simpleMatrix.maxElement();
	cout << "Max el " << maxElement2 << endl;

	float norm2 = simpleMatrix.norm();
	cout << "Norm " << norm2 << endl;

	return 0;

}