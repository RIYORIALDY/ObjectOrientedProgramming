#include <iostream>

class Counter {
private:
    int count;

public:
    Counter() : count(0) {}

    void tambah() {
        count++;
    }

    int getCount() const {
        return count;
    }
};

int main() {
// Counter
    Counter counter;
    counter.tambah();
    counter.tambah();
    std::cout << "Hitungan Saat Ini: " << counter.getCount() << std::endl;
    
    return 0;
}