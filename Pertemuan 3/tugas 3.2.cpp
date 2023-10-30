#include <iostream>
using namespace std;

int main() {
    double angka1, angka2, angka3;

    // Meminta untuk memasukkan tiga angka
    cout << "Masukkan tiga angka: ";
    cin >> angka1 >> angka2 >> angka3;

   // Periksa apakah angka1 adalah angka terbesar
   if(angka1 >= angka2 && angka1 >= angka3)
    cout << "Angka terbesar: " << angka1;

   // Periksa apakah angka2 adalah angka terbesar
   else if(angka2 >= angka1 && angka2 >= angka3)
   cout << "Angka terbesar: " << angka2;

   // Jika angka1 dan angka2 bukan angka terbesar, maka angka3 adalah angka terbesar
   else
   cout << "Angka terbesar: "<< angka3;

   return 0;
    }

