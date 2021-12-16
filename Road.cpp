#include "Road.h"

static const int FEET_PER_MILE = 5280;
const float INCHES_PER_FOOT = 12.0F;
//setters
void Road:: setWidth(int feet)
{
    width = feet;
}
void Road::setLength(int miles)
{
    length = miles;
}

//getters
int Road::getWidth()
{
    return width;
}
int Road::getLength()
{
    return length;
}
float Road::asphalt(int thickness)
{
    float volume = 0.0;
    volume = (thickness / INCHES_PER_FOOT) * (width) * (length * FEET_PER_MILE);
    return volume;
}
