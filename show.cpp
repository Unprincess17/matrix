#include<iostream>
#include"Matrix.h"
using namespace std;
colV c1 = { 1,2,3 };
colV c2 = { 4,5,6 };
colV c3 = { 7,8,10 };
rowV r1 = { c1,c2,c3 };
int main() {
	Matrix m1 = Matrix(r1);
	Matrix m2 = m1.diagonalize();
	m2.show();
}