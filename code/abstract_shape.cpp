#include <iostream>
using namespace std;


class shape
{
public:
    //纯虚函数
    virtual double area() = 0;

};

//定义圆形类
class circle : public shape
{
private:
    int r;

public:
    circle(int a) : r(a)
    {}

    double area()
    {
        return r * r * 3.14;
    }
};

//定义矩形类
class rectangle : public shape
{
private:
    int x;
    int y;

public:
    rectangle(int a, int b) : x(a), y(b)
    {}

    double area()
    {
        return x * y;
    }
};


int main()
{
    rectangle r(5.0, 6.0);
    circle c(5);


    cout << "圆形面积为: " << c.area() << endl;

    cout << "矩形面积为: " << r.area() << endl;

    return 0;
}
