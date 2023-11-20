#include <iostream>

using namespace std;

int main (){
    int pilihan;
    int batas;
    int jumlahganjil = 0;
    int jumlahgenap = 0;
    int jumlahprima = 0;

    cout << "Masukkan Pilihan [1. Ganjil] [2. Genap] [3. Prima]: ";
    cin >> pilihan;

    cout << "Masukkan batas akhir : ";
    cin >> batas;  // Masukkan batas akhir yang diinginkan
    
    //Bilangan Ganjil
     cout << "Bilangan Ganjil: ";
     //Output Bilangan Ganjil
     //Mencari Bilangan Ganjil

     for(int i = 0; i <= batas; i++){
        if(i % 2 != 0){
            cout << i << " "; 
            jumlahganjil += i;
        }
     }

     cout << endl;

    //Bilangan Genap
     cout << "Bilangan Genap: ";
     for(int i = 0; i <= batas; i += 2){
        cout << i << " ";
        jumlahgenap += i;
     }
     cout << endl;

    //Bilangan Prima
     cout << "Bilangan Prima: ";
     for(int i = 2; i <= batas; i++){
        int j;
        for(j = 2; j * j <= i && i % j != 0; j++){
        }
        if(j * j > i){
            cout << i << " ";
            jumlahprima += i;
        }
     }        
     cout << endl;

    //Jumlah Dari Bilangan Ganjil, Genap, dan Prima

     cout << "Jumlah bilangan ganjil: " << jumlahganjil << endl;
     cout << "Jumlah bilangan genap: " << jumlahgenap << endl;
     cout << "Jumlah bilangan prima: " << jumlahprima << endl;

    //Faktor Dari Bilangan Ganjil, Genap, dan Prima

     cout << "Faktor dari Bilangan Ganjil: ";
      for (int k = 1; k <= jumlahganjil; k++){
        if (jumlahganjil % k == 0){
            cout << k << " ";
        }
      }   
     cout << endl;

     cout << "Faktor dari Bilangan Genap: ";
      for (int l = 1; l <= jumlahgenap; l++){
        if (jumlahgenap % l == 0){
            cout << l << " ";
        }
      }      
     cout << endl;

     cout << "Faktor dari Bilangan Prima: ";
      for (int m = 1; m <= jumlahprima; m++){
        if (jumlahprima % m == 0){
            cout << m << " ";
        }
      } 
     cout << endl;

     return 0;
}