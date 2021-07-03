#include<iostream>
#include"Matrix.h"
using namespace std;
colV c1 = { 1,1,1 };
colV c2 = { 2,2,2 };
colV c3 = { 1,-2,-2 };
rowV r1 = { c1,c2,c3 };
int main() {
	Matrix m1 = Matrix(r1);
	Matrix m2 = m1.step();
	m2.show();
	cout << tmp<<endl;
}