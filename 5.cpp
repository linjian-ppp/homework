#include <iostream>
#include <cmath>
using namespace std;

class Vector {
private:
    double x;
    double y;

public:
    // 构造函数
    Vector(double a, double b) : x(a), y(b) {}

    // add方法实现向量相加
    Vector add(const Vector& other) {
        return Vector(x + other.x, y + other.y);
    }

    // print方法用于打印向量的分量
    void print() {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    // dir方法用于求取并打印向量的模长
    void dir() {
        double length = sqrt(x * x + y * y);
        cout << "向量的模长为: " << length << endl;
    }
};

int main() {
    double x1, y1, x2, y2;
    cout << "第一个向量的x和y坐标：";
    cin >> x1 >> y1;
    cout << "第二个向量的x和y坐标：";
    cin >> x2 >> y2;

    Vector v1(x1, y1);
    Vector v2(x2, y2);


    Vector sum = v1.add(v2);
    // 打印两向量相加后的向量坐标
    cout << "向量之和为：";
    sum.print();

    // 计算并打印两向量和的模长
    sum.dir();

    return 0;
}
