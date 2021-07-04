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
    // TODO: 在此处插入 return 语句
}

void unknown::instance(const double i)
{
}
