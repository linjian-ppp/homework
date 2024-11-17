#include <iostream>
#include <cmath>
using namespace std;

class Vector {
private:
    double x;
    double y;

public:
    // ���캯��
    Vector(double a, double b) : x(a), y(b) {}

    // add����ʵ���������
    Vector add(const Vector& other) {
        return Vector(x + other.x, y + other.y);
    }

    // print�������ڴ�ӡ�����ķ���
    void print() {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    // dir����������ȡ����ӡ������ģ��
    void dir() {
        double length = sqrt(x * x + y * y);
        cout << "������ģ��Ϊ: " << length << endl;
    }
};

int main() {
    double x1, y1, x2, y2;
    cout << "��һ��������x��y���꣺";
    cin >> x1 >> y1;
    cout << "�ڶ���������x��y���꣺";
    cin >> x2 >> y2;

    Vector v1(x1, y1);
    Vector v2(x2, y2);


    Vector sum = v1.add(v2);
    // ��ӡ��������Ӻ����������
    cout << "����֮��Ϊ��";
    sum.print();

    // ���㲢��ӡ�������͵�ģ��
    sum.dir();

    return 0;
}
