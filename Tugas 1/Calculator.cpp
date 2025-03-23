#include <iostream>

class Kalkulator {
private:
    double num1, num2;

public:
    Kalkulator(double a, double b) : num1(a), num2(b) {}

    double tambah() const {
        return num1 + num2;
    }

    double kurang() const {
        return num1 - num2;
    }

    double kali() const {
        return num1 * num2;
    }

    double bagi() const {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            std::cerr << "Error: Division by zero" << std::endl;
            return 0;
        }
    }
};

int main() {
    // Kalkulator
    Kalkulator kalkulator(10, 5);
    std::cout << "Penjumlahan: " << kalkulator.tambah() << std::endl;
    std::cout << "Pengurangan: " << kalkulator.kurang() << std::endl;
    std::cout << "Perkalian: " << kalkulator.kali() << std::endl;
    std::cout << "Pembagian: " << kalkulator.bagi() << std::endl;
    return 0;
}