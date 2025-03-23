#include <iostream>

class Rectangle {
private:
    double panjang, lebar;

public:
    Rectangle(double p, double l) : panjang(p), lebar(l) {}

    double hitungLuas() const {
        return panjang * lebar;
    }
};

int main() {
   // Rectangle
    Rectangle rectangle(5, 10);
    std::cout << "Luas Persegi Panjang: " << rectangle.hitungLuas() << std::endl;
    
    return 0;
}