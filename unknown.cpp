#include "unknown.h"

unknown operator+(unknown front, unknown back)
{
    return unknown();
}

unknown operator+(double front, unknown back)
{
    return unknown();
}

unknown operator+(unknown front, double back)
{
    return unknown();
}

unknown operator-(unknown front, unknown back)
{
    return unknown();
}

unknown operator-(double front, unknown back)
{
    return unknown();
}

unknown operator-(unknown front, double back)
{
    return unknown();
}

unknown operator*(double front, unknown back)
{
    return unknown();
}

unknown operator*(unknown front, double back)
{
    return unknown();
}

unknown operator*(unknown front, unknown back)
{
    return unknown();
}

unknown operator/(unknown front, unknown back)
{
    return unknown();
}

unknown operator/(double front, unknown back)
{
    return unknown();
}

unknown operator/(unknown front, double back)
{
    return unknown();
}

ostream& operator<<(ostream& os, const unknown& _unknown)
{
    // TODO: �ڴ˴����� return ���
}

void unknown::instance(const double i)
{
}
