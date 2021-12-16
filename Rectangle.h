
//Rect object calculates the perimeter and the area of the rectangle by taking the values width and the length using templates
#ifndef Rectangle_h
#define Rectangle_h


static const int EQUAL_SIDES = 2;
template <class DataType>
class Rect
{
    DataType width;
    DataType length;

public:
    void setWidth(DataType);
    void setLength(DataType);

    bool lengthGreater();
    DataType perimeter();
    DataType area();
};

//setters
template <class DataType>
void Rect<DataType>::setWidth(DataType width)
{
    this->width = width;
}

template <class DataType >
void Rect <DataType> :: setLength(DataType length)
{
    this->length = length;
}

//checks if length is greater than width
template <class DataType >
bool Rect <DataType> :: lengthGreater()
{
    if(length > width)
    {
        return true;
    }
    else
    {
        return false;
    }

}

//perimeter of rectangle
template <class DataType >
DataType Rect <DataType> :: perimeter()
{
    return EQUAL_SIDES * (length + width);
}

//area of rectangle
template <class DataType >
DataType Rect <DataType> :: area()
{
    return length * width;
}

#endif