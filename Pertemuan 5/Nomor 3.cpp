#include <iostream>

using namespace std;

void fibonacci(int sum, int t1 = 0, int t2 = 1, int angka_berikutnya = 0){
    // Program Deret Fibonacci

      for (int i = 1; i <= sum; i++) {
           // Tampilkan dua angka pertama
           if(i == 1){
            cout << t1 << " ";
            continue;
        }
           if(i == 2){
            cout << t2 << " ";
            continue;
        }
            // Hitung untuk angka ke 3 dan seterusnya
            angka_berikutnya = t1 + t2;
            t1 = t2;
            t2 = angka_berikutnya;

            cout << angka_berikutnya << " ";
      }
    cout << endl;

}
  int main(){
    int sum;

    cout << "Jumlah deret fibonacci yang diinginkan: ";
      cin >> sum;
    
    fibonacci(sum);
    return 0;
  }

