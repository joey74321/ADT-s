#include <iostream>
using namespace std;

#include <cassert>

#include "Rectangle.h"

int main() {

  // Testing with ints
  {
    Rect<int> rectangle;

    rectangle.setWidth(4);
    rectangle.setLength(3);

    assert(!rectangle.lengthGreater());
    assert(rectangle.area() == 12);
    assert(rectangle.perimeter() == 14);
  }

  // now test with double
    {
        Rect<double> rectangle;
        rectangle.setWidth(7.0);
        rectangle.setLength(12.0);

    }

  cout << "All tests passed!" << endl;

}