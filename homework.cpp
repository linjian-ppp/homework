 #include <iostream>

class Vector {

    double x, y;
public:
    Vector(double x, double y) {  
        this->x = x;
        this->y = y;
    }

    Vector add(const Vector& v) {  
        return Vector(x + v.x, y + v.y);
    }

    void print() { 
        std::cout << x << ", " << y << std::endl;
    }
};

int main() {
    Vector v1(1, 2); 
    Vector v2(3, 4);  


    Vector v3 = v1.add(v2);  

    std::cout << "Sum of v1 and v2: ";
    v3.print();              

    return 0;
}
