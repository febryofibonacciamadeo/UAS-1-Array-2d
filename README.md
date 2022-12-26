# Ujian Akhir Semester 
<br>Mata Kuliah 	: Dasar Pemograman
<br> Nama		: Febryo Fibonacci Amadeo
<br>NIM		: 1227050045
<br>Jurusan		:[Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum
Program dari source code adalah untuk membuat array 2D menggunakan bahasa pemograman c++ yang bertujuan untuk mengubah nilai kolom menjadi nilai baris dan nilai baris menjadi nilai kolom atau yang disebut matriks transpose pada matematika
<ol>
    <li>User menginputkan berapa banyak baris pada array mulai dari range</li>
    <li>User menginputkan berapa banyak baris pada array mulai dari range</li>
    <li>User menginputkan satu persatu nilai array,dimulai dari baris 1 dan kolom 1.</li>
    <li>Jika sudah,Nilai dalam array tersebut di tampilkan sesuai aturan matriks.</li>
    <li>Kemudian nilai ditukar yang kolom menjadi baris dan baris menjadi kolom</li>
</ol>

## Source Code
<code>

#include <iostream>

#include <conio.h>

using namespace std;

int main () {

    // Baris jadi kolom dan Kolom jadi baris
    int a[10][10];
    int i, j, x, y;

	cout << "NAMA : FEBRYO FIBONACCI AMADEO\n";
	cout << "NIM : 1227050045\n";
	cout << "MENUKAR NILAI BARIS JADI KOLOM DAN KOLOM JADI BARIS PADA ARRAY 2D\n";
    cout << "Masukan banyaknya baris : "; cin >> x;
    cout << "Masukan banyaknya kolom : "; cin >> y;
    for(i = 1; i <= x; i++) {
        for( j = 1; j <= y; j++ ) {
            cout << "Masukan nilai ["<<i<<"]["<<j<<"] : "; cin >> a[i][j];
        }
    }
    cout << "Nilai asli : \n";

    for(i = 1; i <= x; i++) {
        for(j = 1; j<= x; j++) {
            cout << "[" << a[i][j] << "]";
        }
        cout << "\n";
    }
    cout << "Nilai diputar : \n";
    for(i = 1; i <= x; i++) {
        for(j = 1; j<= x; j++) {
            cout << "[" << a[j][i] << "]";
        }
        cout << "\n";
    }
    
    getch();
}
</code>

## Output
![uas 1](https://user-images.githubusercontent.com/115018736/209485758-389ebb5b-05ee-4520-ba98-54a4c6a37a59.png)
