// сем матрицы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstddef>
#include <vector>
using namespace std;

struct Matrix {
	int** matrix = nullptr; //название матрицы matrix
	size_t n_ = 0u;
	size_t m_ = 0u;
};

// Создает заполненную нулями матрицу n x m.
void Construct(Matrix& out, size_t n, size_t m) {
	out.n_ = n;
	out.m_ = m;

	out.matrix = new int* [n];
	for (size_t i = 0; i < n; ++i) {
		out.matrix[i] = new int[m];
	}
	for (size_t i = 0; i < n; ++i) {
		for (size_t j = 0; j < m; ++j) {
			out.matrix[i][j] = 0;
		}
	}
	return;
}

// Создает копию матрицы |matrix|.
Matrix Copy(const Matrix& data) {
	Matrix matrix_copy;
	Construct( matrix_copy, data.n_, data.m_);
	for (size_t i = 0; i < data.n_; ++i) {
		for (size_t j = 0; j < data.m_; ++j) {
			matrix_copy.matrix[i][j] = data.matrix[i][j];
		}
	}
	return matrix_copy;
}

// Возвращает сумму двух матриц.
// Если операция невозможна - вернуть пустую матрицу
Matrix Add(const Matrix& a, const Matrix& b) {
	if ((a.m_ == b.m_) && (a.n_ == b.n_)) {
		Matrix matrix_res;
		Construct(matrix_res, a.n_, a.m_);
		for (size_t i = 0; i < a.n_; ++i) {
			for (size_t j = 0; j < a.m_; ++j) {
				matrix_res.matrix[i][j] = a.matrix[i][j] + b.matrix[i][j];
			}
		}
		return matrix_res;
	}
	return Matrix();
}
// Возвращает разницу двух матриц.
// Если операция невозможна - вернуть пустую матрицу
Matrix Sub(const Matrix& a, const Matrix& b) {
	if ((a.m_ == b.m_) && (a.n_ == b.n_)) {
		Matrix matrix_res;
		Construct(matrix_res, a.n_, a.m_);
		for (size_t i = 0; i < a.n_; ++i) {
			for (size_t j = 0; j < a.m_; ++j) {
				matrix_res.matrix[i][j] = a.matrix[i][j] - b.matrix[i][j];
			}
		}
		return matrix_res;
	}
	return Matrix();
}

// Возвращает произведение двух матриц.
// Если операция невозможна - вернуть пустую матрицу
Matrix Mult(const Matrix& a, const Matrix& b) {
	if ((a.m_ == b.m_) && (a.n_ == b.n_)) {
		Matrix matrix_mu;
		Construct(matrix_mu, a.n_, a.m_);

		for (size_t i = 0; i < a.n_; ++i) {
			for (size_t j = 0; j < a.m_; ++j) {
				for (size_t k = 0; k < a.n_; ++k) {
					matrix_mu.matrix[i][j] += a.matrix[i][k] * b.matrix[k][j];
				}
			}
		}
		return matrix_mu;
	}
}

// Транспонирование матрицы.
void Transposition(Matrix& x) {
	Matrix matrix_res;
	Construct(matrix_res, x.n_, x.m_);
	for (size_t i = 0; i < matrix_res.n_; ++i) {
		for (size_t j = 0; j < matrix_res.m_; ++j) {
			matrix_res.matrix[i][j] = x.matrix[i][j];
		}
	}
	x.n_ = matrix_res.n_;
	x.m_ = matrix_res.m_;
	Construct(x, x.n_, x.m_);
	for (size_t i = 0; i < matrix_res.n_; ++i) {
		for (size_t j = 0; j < matrix_res.m_; ++j) {
			x.matrix[i][j] = matrix_res.matrix[j][i];
		}
	}
	Destruct(matrix_res);
	
}
void Destruct(Matrix& in) {
  for (size_t i = 0; i < in.n_; ++i) {
    delete[] in.data_[i];
  }
  delete[] in.data_;
  in.data_ = nullptr;
}

int main()
{   Matrix m;
	Construct(m, 3, 3);
	for (size_t i = 0; i < 3; ++i) {
		for (size_t j = 0; j < 3; ++j) {
			m.matrix[i][j] = rand();
			cout << m.matrix[i][j] << "\t";
		}cout << "\n";
	}
	Matrix m2;
	Construct(m2, 3, 3);
	
	
	Transposition(m);
	for (size_t i = 0; i < 3; ++i) {
		for (size_t j = 0; j < 3; ++j) {
			cout << m.matrix[i][j]<<"\t";
			}cout << "\n";
	}
	return 0;
}
