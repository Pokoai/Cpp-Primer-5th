#include <iostream>

class Point
{
    // no constructor, use default
    public:
        int getX() const { return x; }
        int getY() const { return y; }
        void setX(int newX) { x = newX; };
        void setY(int newY) { y = newY };
    private:
        int x;
        int y;
};

class Rectangle
{
    public:
        Rectangle(int newTop, int newLeft, int newBottom, int newRight);
        ~Rectangle() {};

        int getTop() const { return top; }
        int getLeft() const { return left; }
        int getBottom() const { return bottom; }
        int getRight() const { return right; }

        Point getUpperLeft() const { return upperLeft; }
        Point getUpperRight() const { return upperRight; }
        Point getLowerLeft() const { return lowerLeft; }
        Point getLowerRight() const { return lowerRight; }

        void setUpperLeft(Point location);
        void setUpperRight(Point location);
        void setLowerLeft(Point location);
        void setLowerLeft(Point location);

        void setTop(int newTop);
        void setLeft(int newLeft);
        void setRight(int newRight);
        void setBottom(int newBottom);

        int getArea() const;
        
    private:
        Point upperLeft;
        Point upperRight;
        Point lowerLeft;
        Point lowerRight;
        int top;
        int left;
        int bottom;
        int right;
};