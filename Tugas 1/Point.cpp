#include <iostream>
#include <cmath>

class Point {
private:
    double x, y;

public:
    Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    double hitungJarakDariAsal() const {
        return std::sqrt(x * x + y * y);
    }
};

int main() {
 // Point
    Point point(3, 4);
    std::cout << "Jarak dari Asal: " << point.hitungJarakDariAsal() << std::endl;
    
    return 0;
}