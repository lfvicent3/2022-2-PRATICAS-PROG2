#include "Rectangle.h"

Rectangle::Rectangle()
{
    this->width = 1;
    this->length = 1;
}

double Rectangle::calcPerimeter()
{
    return (this->width * 2) + (this->length * 2);
}
double Rectangle::calcArea()
{
    return this->width * this->length;
}

double Rectangle::getLength()
{
    return this->length;
}
void Rectangle::setLength(double length)
{
    if (length > 0 && length < 20)
    {
        this->length = length;
    }
}

double Rectangle::getWidth()
{
    return this->width;
}

void Rectangle::setWidth(double width)
{
    if (width > 0 && width < 20)
    {
        this->width = width;
    }
}

Rectangle::~Rectangle()
{
}
