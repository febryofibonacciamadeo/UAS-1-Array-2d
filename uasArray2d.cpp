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