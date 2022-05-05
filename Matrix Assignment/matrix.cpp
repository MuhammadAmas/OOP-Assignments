#include <iostream>
using namespace std;

class Matrix{
    public:
    double getelem(int i, int j)
    double setelem(int i, int j)
    virtual Matrix &add(Matrix other)
    virtual Matrix &multiply(Matrix other)
};

class Matrix2DArray : public Matrix{

};

class MatrixLin : public Matrix{

};

class MatrixRowWise : public MatrixLin{

};

class MatrixColWise : public MatrixLin{

};