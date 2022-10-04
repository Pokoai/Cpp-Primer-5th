#include <iostream>

class Shape
{
    public:
        Shape() {}
        virtual ~Shape() {}
        virtual long getArea() = 0;
        virtual long getPerim() = 0;
        virtual void draw() = 0;
};

void Shape::draw()
{
    std::cout << "抽象数据类型 画画" << std::endl;  // 给所有重写函数提供通用功能
}

class Circle : public Shape
{
    public:
        Circle(int newRadius):radius(newRadius) {}
        ~Circle() {}
        long getArea() const { return 3 * radius * radius; }
        long getPrim() const { return 9 * radius; }
        void draw(); 
    
    private:
        int radius;
        int circumference;
};

void Circle::draw()
{
    std::cout << "Circle is drawing!" << std::endl;
    Shape::draw();
}

