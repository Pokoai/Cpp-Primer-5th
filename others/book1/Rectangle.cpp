#include <iostream>

#include "Rectangle.hpp"



// void setUpperLeft(Point location);
// void setUpperRight(Point location);
// void setLowerLeft(Point location);
// void setLowerLeft(Point location);

// void setTop(int newTop);
// void setLeft(int newLeft);
// void setRight(int newRight);
// void setBottom(int newBottom);

// int getArea() const;

Rectangle::Rectangle(int newTop, int newLeft, int newBottom, int newRight)
{
    top = newTop;
    left = newLeft;
    bottom = newBottom;
    right = newRight;

    upperLeft.setX(left);
    upperLeft.setY(top);

    upperRight.setX(right);
    upperRight.setY(top);

    lowerRight.setX(right);
    lowerRight.setY(bottom);

    lowerLeft.setX(left);
    lowerLeft.setY(bottom);
}

void Rectangle::setUpperLeft(Point position)
{
    upperLeft = position;
    upperRight.setY(position.getY());
    
}

