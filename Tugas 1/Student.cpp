#include <iostream>
#include <string>

class Siswa {
private:
    std::string nama;
    std::string id;
    std::string kelas;

public:
    Siswa(const std::string& n, const std::string& i, const std::string& k)
        : nama(n), id(i), kelas(k) {}

    void tampilkanInfo() const {
        std::cout << "Nama: " << nama << std::endl;
        std::cout << "ID: " << id << std::endl;
        std::cout << "Kelas: " << kelas << std::endl;
    }
};

int main() {

    // Siswa
    Siswa siswa("John Doe", "12345", "XII A");
    siswa.tampilkanInfo();

    return 0;
}