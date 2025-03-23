![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)

# Implementasi C++ OOP

Repositori ini berisi implementasi C++ dari berbagai konsep Pemrograman Berorientasi Objek (OOP), yang secara khusus berfokus pada **Abstraksi** dan **Ekapsulasi**. Kelas-kelas berikut ini diimplementasikan:

## Kelas-kelas
- [Exercise: Implementasi C++ OOP](#Exercise-Implementasi-C++-OOP)
    - [Calculator](#1-Calculator)
    - [Student](#2-Student)
    - [Rectangle](#3-Rectangle)
    - [Counter](#4-Counter)
    - [Point](#5-Point)
- [Kompilasi](#kompilasi)

### Exercise : Implementasi C++ OOP

### 1. Calculator
Kelas yang melakukan operasi aritmatika dasar pada dua angka.

#### Methods:
- `jumlahkan()`: Mengembalikan hasil penjumlahan dari dua angka.
- `double kurang()`: Mengembalikan selisih dari dua angka.
- `double kali()`: Mengembalikan hasil kali dari dua angka.
- `double bagi()`: Mengembalikan hasil bagi dari dua angka (dengan penanganan kesalahan untuk pembagian dengan nol).

#### OutPut:
![Image](https://github.com/user-attachments/assets/bc69fb4f-2f29-4fd0-8927-4385627ae055)

### 2. Student
Kelas yang menyimpan informasi tentang siswa.

#### Atribut:
- `std::string nama`: Nama siswa.
- `std::string id`: Identitas siswa.
- `std::string kelas`: Kelas dari siswa tersebut.

#### Methods:
- `void tampilkanInfo()`: Menampilkan informasi siswa.

#### OutPut:
![Image](https://github.com/user-attachments/assets/5db0fa16-2dfd-4c06-92c3-ceb29420d9b6)

### 3. Rectangle
Kelas yang menghitung luas persegi panjang.

#### Atribut:
- `panjang ganda`: Panjang persegi panjang.
- `double lebar`: Lebar persegi panjang.

#### Methods:
- `double hitungLuas()`: Mengembalikan luas persegi panjang.

#### OutPut:
![Image](https://github.com/user-attachments/assets/98c66612-622b-488d-bffb-cf4a32abb7e8)

### 4. Counter
Kelas yang mengelola penghitung sederhana.

#### Atribut:
- `int count`: Hitungan saat ini.

#### Metode:
- `void tambah()`: Menambah hitungan dengan satu.
- `int getCount()`: Mengembalikan hitungan saat ini.

#### OutPut:
![Image](https://github.com/user-attachments/assets/8bf4f698-2bfc-4c99-8d7f-aecb22874378)

### 5. Point
Kelas yang merepresentasikan sebuah titik dalam ruang 2D.

#### Atribut:
- `double x`: Koordinat x dari titik.
- `double y`: Koordinat y dari titik tersebut.

#### Methods:
- `double hitungJarakDariAsal()`: Menghitung jarak dari titik asal (0, 0).

#### OutPut:
![Image](https://github.com/user-attachments/assets/92e25299-164e-4679-9631-adcf4d9cddd3)

## Penggunaan
Untuk menggunakan kelas-kelas ini, sertakan file header masing-masing dalam proyek C++ Anda dan buatlah instance dari kelas-kelas tersebut sesuai kebutuhan. Fungsi utama mendemonstrasikan bagaimana menggunakan setiap kelas.

## Kompilasi
Untuk mengkompilasi kode, gunakan kompiler C++ seperti g++. Sebagai contoh:
```bash
g++ main.cpp -o program
