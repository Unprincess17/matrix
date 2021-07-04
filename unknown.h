#pragma once
#include<iostream>
#include<string>
using namespace std;
//unknown is unknown number in expressions
//what is interesting is they are both string and double
// for example, when they left multiple or right so, the all 'd cast to unknown, and the value is their coefficent plus 1.
//	however, when cout an unknown,  the value is its eigen-value times 1
//	
class unknown
{
private:
	string name;
	double coefficent;
	bool isinstanced;
public:
	friend unknown operator+(unknown front, unknown back);
	friend unknown operator+(double front, unknown back);
	friend unknown operator+(unknown front, double back);//前置后置+
	friend unknown operator-(unknown front, unknown back);
	friend unknown operator-(double front, unknown back);
	friend unknown operator-(unknown front, double back);//前置后置-
	friend unknown operator*(unknown front, unknown back);
	friend unknown operator*(double front, unknown back);
	friend unknown operator*(unknown front, double back);//前置后置*
	friend unknown operator/(unknown front, unknown back);
	friend unknown operator/(double front, unknown back);
	friend unknown operator/(unknown front, double back);//前置后置/
	friend ostream& operator<<(ostream& os, const unknown& _unknown);
	void instance(const double i);
};

