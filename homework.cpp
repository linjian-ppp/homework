 #include <iostream>

class Vector {

    double x, y;
public:
    Vector(double x, double y) {  // ���캯��
        this->x = x;
        this->y = y;
    }

    Vector add(const Vector& v) {  // �����ӷ�
        return Vector(x + v.x, y + v.y);
    }

    void print() {  // ��ӡ����
        std::cout << x << ", " << y << std::endl;
    }
};

int main() {
    Vector v1(1, 2);  // ��������v1
    Vector v2(3, 4);  // ��������v2

    std::cout << "Vector v1: ";
    v1.print();      // ��ӡv1

    std::cout << "Vector v2: ";
    v2.print();      // ��ӡv2

    Vector v3 = v1.add(v2);  // ����v1��v2��ӵõ�v3

    std::cout << "Sum of v1 and v2: ";
    v3.print();              // ��ӡv3

    return 0;
}

