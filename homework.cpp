 #include <iostream>

class Vector {

    double x, y;
public:
    Vector(double x, double y) {  // 构造函数
        this->x = x;
        this->y = y;
    }

    Vector add(const Vector& v) {  // 向量加法
        return Vector(x + v.x, y + v.y);
    }

    void print() {  // 打印向量
        std::cout << x << ", " << y << std::endl;
    }
};

int main() {
    Vector v1(1, 2);  // 创建向量v1
    Vector v2(3, 4);  // 创建向量v2

    std::cout << "Vector v1: ";
    v1.print();      // 打印v1

    std::cout << "Vector v2: ";
    v2.print();      // 打印v2

    Vector v3 = v1.add(v2);  // 向量v1和v2相加得到v3

    std::cout << "Sum of v1 and v2: ";
    v3.print();              // 打印v3

    return 0;
}

