﻿#ifndef MATRIX_H
#define MATRIX_H

#include<vector>
#include<string>
using namespace std;

typedef vector<vector<double>> rowV;
typedef vector<double> colV;
typedef struct xy {
	rowV::size_type x = 0;
	colV::size_type y = 0;
}xy;

#define myhorizontal 1
#define myvertical 0

class Matrix {
public:
	vector<vector<double>> row;
	xy xyend;

	//Default Constructor, Generate [[0.0]]
	Matrix() {
		colV col;
		col.push_back(0.0);
		row.push_back(col);
		xyend.x = 0;
		xyend.y = 0;
	}

	//Constructor for square matrix(rownum * rownum)
	Matrix(int rownum) {
		for (int i = 0; i != rownum; ++i) {
			colV colrow(rownum, 0.0);
			row.push_back(colrow);
		}
		xyend.x = rownum - 1;
		xyend.y = rownum - 1;
	}

	//Constructor for Matrix O(rownum*colnum)
	Matrix(int rownum, int colnum)
	{
		for (int i = 0; i != rownum; ++i) {
			colV colrow(colnum, 0.0);
			row.push_back(colrow);
		}
		xyend.x = rownum - 1;
		xyend.y = colnum - 1;
	}

	//Constructor for well-defined Matrix, Parameters: rowV _col
	Matrix(rowV _row) :
		row(_row)
	{
		xyend.x = row.size() - 1;
		xyend.y = row[0].size() - 1;
	}

	//Constructor for well-defined Matrix, Parameters: Matrix m
	Matrix(const Matrix& m) :
		row(m.row)
	{
		xyend.x = row.size() - 1;
		xyend.y = row[0].size() - 1;
	}


	//check, and conpensate for the offset
	void check();

	//print the matrix
	void show();

	//change element's value of matrix 
	void reload(rowV::size_type rownum, colV::size_type colnum, double renum);

	//calculate the determination of matrix
	double determination();

	//Check if the Matrix is a square
	bool issquare();

	//check if the Matrix is a Zero
	bool iszero();

	// change rowm and rown
	void changeRow(rowV::size_type i, rowV::size_type j);

	// change colm and coln
	void changeCol(colV::size_type i, colV::size_type j);

	void addRow(rowV::size_type rownew, rowV::size_type rowold);

	void addCol(colV::size_type colnew, colV::size_type colold);

	void multiRow(rowV::size_type row, double scale);

	void multiCol(colV::size_type col, double scale);

	// generate the Unit matrix of itself
	Matrix IMatrix();

	// transpose the matrix
	Matrix TMatrix();

	// Add Matrix m and Matrix n
	Matrix add(Matrix& n);

	// Multiply by scaler
	Matrix scaleMulti(double scale);

	// Mutiple with another matrix
	Matrix matrixMulti(Matrix& n);

	// count (double) algebraic cofactor
	double algeCof(rowV::size_type i, colV::size_type j);

	// Generate Adjugate Matrix
	Matrix adjugate();

	// Reverse the Matrix m
	Matrix reverse();

	// Count the eigen number
	Matrix eigen();

	//calculate the stepped(?) Matrix
	Matrix step();

	//对角化
	Matrix diagonalize(Matrix& m);

	//获取xy的值，保存在对象的xy中
	xy getxy(xy xy_t, bool method = myvertical);

	xy getxy(bool method = myvertical);
	
	//后向遍历，从xy_t向前找到最后一个非零的xy,保存在哪里？
	//鉴于使用该函数一般都是在step函数之后，所以只找对角线的元素
	xy get_lastxy(xy xy_t);

	//我也不知道是干什么的，可能是向上减的
	Matrix upperize();

	//算秩的吧，我猜的
	int getRank();
};

#endif MATRIX_H