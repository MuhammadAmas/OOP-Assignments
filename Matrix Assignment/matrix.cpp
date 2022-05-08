#include <iostream>
using namespace std;

class Matrix{
    public:
    double getelem(int i, int j);
    double setelem(int i, int j);
    virtual Matrix &add(Matrix other);
    virtual Matrix &multiply(Matrix other);
};

class Matrix2DArray : public Matrix{
    private:
    double **data [3][3];

    protected:
    int min(int a, int bint);
    
    public:
    Matrix2DArray();
    Matrix2DArray(int height, int width);
    double getElem(int i, int j);
    double setelem(int i, int j, double value);
    Matrix &add(Matrix other);
    Matrix &multiply(Matrix other);
    string toString(){};
};

class MatrixLin : public Matrix{
    double data[];
    int height;
    int width;
    int min(int a, int b);
    public:
    Matrix2DArray delinearize();
};

class MatrixRowWise : public MatrixLin{
    public:
    MatrixRowWise(){};
    MatrixRowWise(int height, int width);
    double getElem(int i, int j);
    double setelem(int i, int j, double value);
    Matrix &add(Matrix other);
    Matrix &multiply(Matrix other);
    Matrix2Darray delinearize();
    string toString(){};
};

class MatrixColWise : public MatrixLin{
    public:
    MatrixColWise(){};
    double getElem(int i, int j);
    double setelem(int i, int j, double value);
    Matrix &add(Matrix other);
    Matrix &multiply(Matrix other);
    Matrix2Darray delinearize();
    string toString(){};
};

int main(){
    
};